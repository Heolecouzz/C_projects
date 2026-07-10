# SNAKE
![C](https://img.shields.io/badge/language-C-blue.svg)
![License](https://img.shields.io/badge/license-MIT-green.svg)

A terminal implementation of the classic Snake game written in C. The project uses ANSI escape sequences for rendering and focuses on modular software architecture and game-loop implementation.
## Learning objectives

This project was developed to strengthen my understanding of:

- 2D arrays
- Modular programming
- Build automation using Make
- Terminal rendering
- ANSI escape sequences

## Features : 

- Four difficulty levels
- Dynamic snake growth
- Apple generation
- Collision detection
- ANSI terminal rendering
- Modular C architecture
- Built with a Makefile

## Prerequisites :
- gcc

## Build :
```bash
make
```

## Usage :
```bash
./Snake
```


## Project Architecture

The game is split into several independent modules:

- board.c: manages the game board
- snake.c: handles snake movement and growth
- apples.c: generates and manages apples
- referee.c: detects collisions and game-over conditions
- game.c: controls the main game loop


## Technical notes :
- Memory usage has been verified with Valgrind to ensure no memory leaks during normal execution.
- Compiled with -Wall -Wextra -Werror -g.
- Rendering is performed using ANSI escape sequences without relying on external graphics libraries.
- Here's the structure of the project :
```text
.
├── apples.c
├── apples.h
├── board.c
├── board.h
├── game.c
├── Makefile
├── README.md
├── referee.c
├── referee.h
├── snake.c
├── snake.h
├── testapples.c
├── testboard.c
├── testreferee.c
└── testsnake.c
```

## Skills demonstrated :

- C programming
- Dynamic memory management
- Modular software architecture
- ANSI terminal rendering
- Collision detection
- Game loop implementation
- Build automation with Make


## Future improvements :

- ncurses interface
- SDL graphical version
- Pause/resume support
- High-score system
- Configurable board size
- Smarter difficulty scaling

## Lessons Learned

During this project I learned:

- How ANSI escape sequences can be used to render graphics in a terminal
- How to structure a game loop
- How to manage game state cleanly
- How to detect collisions efficiently


## Example :
``` text
Welcome to snake ! Your aim is to eat apples to grow !

In which difficulty whould you want to play : Easy (1) / Medium (2) / Difficult (3) / Hardcore (4) >

- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
|     |     |     |     |     |     |     |     |     |     |     |     |     |     |     |     |     |
- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
|     |     |     |     |     |     |     |     |     |     |     |     |     |     |     |     |     |
- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
|     |     |     |     |     |     |     |     |     |     |     |     |     |     |     |     |     |
- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
|     |     |     |     |     |     |     |     |     |     |     |     |     |     |     |     |     |
- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
|     |     |     |     |     |     |     |     |     |     |     |     |     |     |     |     |     |
- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
|     |     |     |     |     |     |     |     |     |     |     |     |     |     |     |     |     |
- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
|     |     |     |     |     |     |     |     |     |  >>>|>>>>>|>>>>>|>>>>>|  v  |     |     |     |
- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
|     |     |     |     |     |     |     |     |     |     |     |     |     |  v  |     |     |     |
- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
|     |     |     |     |     |     |     |     |     |     |     |     |     |  v  |     |     |     |
- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
|     |     |     |     |     |     |     |     |     |     |     |     |     |  v  |     |     |     |
- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
|     |     |     |     |     |     |     |     |     |     |     |     |     |     |     |     |     |
- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
|     |     |     |     |     |     |     |     |     |     |     |     |     |     |     |     |     |
- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
|     |     |     |     |     |     |     |     |     |     |     |     |     |     |     |     |     |
- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
|     |     |     |     |     |     |     |     |     |     |     |     |     |     |     |     |     |
- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
|     |     |     |     |     |     |     |     |     |     |     |     |     |  A  |     |     |     |
- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -


```