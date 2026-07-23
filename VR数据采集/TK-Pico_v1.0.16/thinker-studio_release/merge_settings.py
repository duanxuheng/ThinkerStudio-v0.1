#!/usr/bin/env python3
"""
Settings JSON Merge Script

合并安装包默认配置和用户已有配置：
- 首次安装：直接使用默认配置
- 升级安装：保留用户已有配置，新增配置项合并写入
"""

import json
import sys
import shutil
from pathlib import Path


def deep_merge(base: dict, override: dict) -> dict:
    """
    深度合并两个字典
    - override 的值覆盖 base 的值
    - 对于字典类型的值，递归合并
    - base 中有但 override 中没有的键保留
    """
    result = base.copy()
    for key, value in override.items():
        if key in result and isinstance(result[key], dict) and isinstance(value, dict):
            result[key] = deep_merge(result[key], value)
        else:
            result[key] = value
    return result


def merge_settings(source_path: str, target_path: str):
    """
    合并配置文件

    Args:
        source_path: 安装包中的默认配置
        target_path: 用户已有的配置
    """
    source_file = Path(source_path)
    target_file = Path(target_path)

    if not source_file.exists():
        print(f"错误: 源配置文件不存在: {source_path}")
        sys.exit(1)

    if not target_file.exists():
        print(f"目标配置不存在，直接复制源配置")
        shutil.copy2(source_file, target_file)
        return

    # 读取配置
    with open(source_file, 'r', encoding='utf-8') as f:
        source_config = json.load(f)

    with open(target_file, 'r', encoding='utf-8') as f:
        target_config = json.load(f)

    # 合并：以用户配置为基础，补充新增配置项
    merged_config = deep_merge(target_config, source_config)

    # 写入合并结果
    with open(target_file, 'w', encoding='utf-8') as f:
        json.dump(merged_config, f, indent=2, ensure_ascii=False)

    print(f"配置合并完成: {target_path}")


if __name__ == "__main__":
    if len(sys.argv) != 3:
        print("用法: python3 merge_settings.py <源配置路径> <目标配置路径>")
        sys.exit(1)

    merge_settings(sys.argv[1], sys.argv[2])