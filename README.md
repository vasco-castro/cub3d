_This project has been created as part of the 42 curriculum by vsoares-_

# cub3d

## Description

A 3D game engine project from the 42 School curriculum. This project implements a raycasting-based 3D graphics engine similar to classic games like Wolfenstein 3D.

## Overview

**cub3d** is a C-based project that creates a first-person 3D game using the raycasting algorithm. Players can navigate through a 3D maze rendered in real-time, featuring textured walls and sprite handling.

## Features

- **Raycasting Engine**: Real-time 3D rendering using raycasting technique
- **Texture Mapping**: Support for textured walls with different orientations
- **Player Movement**: Smooth keyboard controls for navigation
- **Mouse Controls**: Look around and interact with the environment
- **Sprite Rendering**: Draw and manage game sprites
- **Map Parser**: Load custom maps from configuration files

## Requirements

- **Language**: C
- **Library**: MLX42 or minilibx (42 graphics library)
- **OS**: Linux (primary) / MacOS compatible
- **Compiler**: gcc or clang with proper flags

## Installation & Compilation

```bash
# Clone the repository
git clone <repository-url>
cd cub3d

# Compile the project
make

# Run the game
./cub3d [map_file]
```

## Usage

```bash
./cub3d maps/map.cub
```

### Controls

- **W/A/S/D**: Move forward/left/backward/right
- **Arrow Keys**: Rotate camera view
- **ESC**: Exit game
- **Mouse**: Look around (if implemented)

## Map Format

Maps are defined in `.cub` configuration files with the following structure:

```
NO ./path/to/north_texture.png
SO ./path/to/south_texture.png
WE ./path/to/west_texture.png
EA ./path/to/east_texture.png
F 220,100,0
C 225,30,0

111111
100001
101101
111111
```

## Project Structure

```text
cub3d/
├── Makefile
├── src/
│   ├── main.c
│   ├── parsing/
│   ├── rendering/
│   ├── utils/
│   └── ...
├── include/
│   └── cub3d.h
├── maps/
│   └── map.cub
└── textures/
    └── *.png
```

## Bonus Features (Optional)

- Wall collisions
- Minimap display
- Additional sprite types
- Performance optimization
- Mouse rotation

## Norminette

This project follows the 42 School C coding standard (norminette). All code must comply with:

```bash
norminette src/ include/
```
