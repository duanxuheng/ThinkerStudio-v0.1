#!/usr/bin/env bash
set -euo pipefail

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
DATA_DIR="${1:-$SCRIPT_DIR/src/sample/data}"
OUTPUT_DIR="${2:-$SCRIPT_DIR/src/sample/config/actions}"
EXTRACTOR="$SCRIPT_DIR/src/sample/scripts/extract_arm_action.py"
PYTHON_BIN="${PYTHON_BIN:-$SCRIPT_DIR/.venv/bin/python}"

if [[ ! -d "$DATA_DIR" ]]; then
	echo "data dir not found: $DATA_DIR" >&2
	exit 1
fi

if [[ ! -f "$EXTRACTOR" ]]; then
	echo "extractor script not found: $EXTRACTOR" >&2
	exit 1
fi

if [[ ! -x "$PYTHON_BIN" ]]; then
	echo "python not executable: $PYTHON_BIN" >&2
	exit 1
fi

mapfile -t PKL_FILES < <(find "$DATA_DIR" -type f -name '*.pkl' | sort)
if [[ ${#PKL_FILES[@]} -eq 0 ]]; then
	echo "no pkl files found in $DATA_DIR"
	exit 0
fi

declare -A CHOSEN_PATH=()
declare -A CHOSEN_DEPTH=()

for file_path in "${PKL_FILES[@]}"; do
	rel_path="${file_path#"$DATA_DIR"/}"
	base_name="$(basename "${file_path%.pkl}")"
	depth=$(awk -F/ '{print NF-1}' <<< "$rel_path")

	if [[ -z "${CHOSEN_DEPTH[$base_name]+x}" || $depth -lt ${CHOSEN_DEPTH[$base_name]} ]]; then
		CHOSEN_PATH[$base_name]="$file_path"
		CHOSEN_DEPTH[$base_name]=$depth
	fi
done

mkdir -p "$OUTPUT_DIR"

echo "Converting pkl to action json..."
while IFS= read -r base_name; do
	in_path="${CHOSEN_PATH[$base_name]}"
	out_path="$OUTPUT_DIR/$base_name.json"
	"$PYTHON_BIN" "$EXTRACTOR" "$in_path" -o "$out_path"
	echo "- $base_name <- ${in_path#"$SCRIPT_DIR"/}"
done < <(printf '%s\n' "${!CHOSEN_PATH[@]}" | sort)

echo "Done. Output directory: $OUTPUT_DIR"
