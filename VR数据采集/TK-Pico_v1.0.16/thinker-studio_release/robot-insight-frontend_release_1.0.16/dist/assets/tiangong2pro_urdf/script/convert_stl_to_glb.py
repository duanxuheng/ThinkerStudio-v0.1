#!/usr/bin/env python3
"""
STL to GLB Converter
将STL文件批量转换为GLB格式，减小文件体积，提高加载性能

灰色颜色配置：
- RGB 值: (136, 136, 136) = 0x888888
- 作用: 确保转换后的 GLB 文件在前端显示时与原始 STL 文件保持一致的灰色效果
- 实现: 使用顶点颜色方式应用灰色，确保颜色信息被正确导出到 GLB 文件
"""

import os
import sys
from pathlib import Path

try:
    import trimesh
    import numpy as np
except ImportError:
    print("错误: 缺少必要的依赖库")
    print("请运行: pip install trimesh numpy")
    sys.exit(1)


def convert_stl_to_glb(stl_path, glb_path, simplify=False, target_faces=None):
    """
    将STL文件转换为GLB格式
    
    Args:
        stl_path: STL文件路径
        glb_path: GLB输出路径
        simplify: 是否简化网格（暂不支持，需要额外依赖）
        target_faces: 目标面数，None表示不限制
    """
    try:
        # 加载STL文件
        mesh = trimesh.load(stl_path)
        
        # 如果是场景对象，合并所有几何体
        if isinstance(mesh, trimesh.Scene):
            mesh = trimesh.util.concatenate(
                tuple(trimesh.Trimesh(vertices=g.vertices, faces=g.faces)
                      for g in mesh.geometry.values())
            )
        
        original_faces = len(mesh.faces)
        print(f"  面数: {original_faces}")
        
        # 确保法线正确
        mesh.fix_normals()
        
        # 创建默认材质（灰色，与原始STL渲染效果一致）
        # 注意：使用材质颜色而不是顶点颜色，确保前端高亮时能正确覆盖
        # 灰色值对应 Three.js 中的 0x888888
        gray_color = [136/255.0, 136/255.0, 136/255.0, 1.0]  # Normalized to 0-1
        
        # 创建 PBR 材质（更好地支持高亮和光照）
        material = trimesh.visual.material.SimpleMaterial(
            ambient=gray_color,
            diffuse=gray_color,
            specular=[0.2, 0.2, 0.2, 1.0],
            glossiness=0.3,
            image=None
        )
        
        # 应用材质到网格（不使用顶点颜色，直接使用材质）
        mesh.visual = trimesh.visual.TextureVisuals(mesh, material=material)
        
        # 导出为GLB（二进制格式，比STL更紧凑）
        # include_normals=True 确保法线被正确导出用于光照计算
        mesh.export(glb_path, file_type='glb', include_normals=True)
        
        # 获取文件大小
        stl_size = os.path.getsize(stl_path)
        glb_size = os.path.getsize(glb_path)
        reduction = (1 - glb_size / stl_size) * 100
        
        print(f"  大小: {stl_size/1024:.1f}KB → {glb_size/1024:.1f}KB (减少 {reduction:.1f}%)")
        
        return True
        
    except Exception as e:
        print(f"  错误: {e}")
        import traceback
        traceback.print_exc()
        return False


def batch_convert(meshes_dir, output_dir=None, simplify=False, target_faces=50000):
    """
    批量转换meshes目录下的所有STL文件
    
    Args:
        meshes_dir: meshes文件夹路径
        output_dir: 输出目录，默认为meshes_glb
        simplify: 是否简化网格（暂不支持）
        target_faces: 目标面数
    """
    meshes_path = Path(meshes_dir)
    
    if not meshes_path.exists():
        print(f"错误: 目录不存在 {meshes_dir}")
        return
    
    # 设置输出目录
    if output_dir is None:
        output_path = meshes_path.parent / "meshes_glb"
    else:
        output_path = Path(output_dir)
    
    output_path.mkdir(exist_ok=True)
    
    # 获取所有STL文件
    stl_files = list(meshes_path.glob("*.STL")) + list(meshes_path.glob("*.stl"))
    
    if not stl_files:
        print(f"错误: 在 {meshes_dir} 中没有找到STL文件")
        return
    
    print(f"找到 {len(stl_files)} 个STL文件")
    print(f"输出目录: {output_path}")
    print(f"格式转换: STL (ASCII/Binary) → GLB (Binary)")
    print("-" * 60)
    
    success_count = 0
    total_original_size = 0
    total_converted_size = 0
    
    for i, stl_file in enumerate(stl_files, 1):
        # 生成GLB文件名
        glb_file = output_path / (stl_file.stem + ".glb")
        
        print(f"[{i}/{len(stl_files)}] {stl_file.name}")
        
        # 转换
        if convert_stl_to_glb(stl_file, glb_file, simplify, target_faces):
            success_count += 1
            total_original_size += os.path.getsize(stl_file)
            total_converted_size += os.path.getsize(glb_file)
        
        print()
    
    # 统计信息
    print("=" * 60)
    print(f"转换完成: {success_count}/{len(stl_files)} 成功")
    print(f"原始总大小: {total_original_size/1024/1024:.2f} MB")
    print(f"转换后大小: {total_converted_size/1024/1024:.2f} MB")
    
    if total_original_size > 0:
        reduction = (1 - total_converted_size / total_original_size) * 100
        print(f"总体减少: {reduction:.1f}%")
    
    print(f"\nGLB文件已保存到: {output_path}")


def main():
    """主函数"""
    import argparse
    
    parser = argparse.ArgumentParser(description='将STL文件批量转换为GLB格式')
    parser.add_argument('meshes_dir', help='meshes文件夹路径')
    parser.add_argument('-o', '--output', help='输出目录 (默认: meshes_glb)')
    parser.add_argument('--no-simplify', action='store_true', help='不简化网格')
    parser.add_argument('--target-faces', type=int, default=50000, 
                        help='目标面数 (默认: 50000)')
    
    args = parser.parse_args()
    
    batch_convert(
        args.meshes_dir,
        args.output,
        simplify=not args.no_simplify,
        target_faces=args.target_faces
    )


if __name__ == "__main__":
    # 如果直接运行，使用默认路径
    if len(sys.argv) == 1:
        script_dir = Path(__file__).parent
        meshes_dir = script_dir.parent / "meshes"
        batch_convert(str(meshes_dir), simplify=False, target_faces=50000)
    else:
        main()
