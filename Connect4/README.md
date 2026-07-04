# CONNECT FOUR  
![C](https://img.shields.io/badge/language-C-blue.svg)
![License](https://img.shields.io/badge/license-MIT-green.svg)

A Connect Four implementation written in C supporting Human vs Human, Human vs Computer and Computer vs Computer matches. The computers currently selects moves randomly, but always plays an immediate winning move when one is available.
## Learning objectives

This project was developed to strengthen my understanding of:

- 2D arrays
- Modular programming
- Build automation using Make

## Features : 
- Human vs Human game
- Human vs Computer game
- Computer vs Computer game
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
./ConnectFour
```

## Technical notes :
- Memory usage has been verified with Valgrind to ensure no memory leaks during normal execution.
- Compiled with -Wall -Wextra -Werror -g.
- Here's the structure of the project :
```text
├── board.c
├── board.h
├── game.c
├── Makefile
├── player.c
├── player.h
├── README.md
├── referee.c
├── referee.h
├── testboard.c
├── testplayer.c
└── testreferee.c
```

## Skills demonstrated :

- C programming
- 2D array manipulation
- Game logic implementation
- Basic AI
- Modular software architecture
- Build automation using Make
- Memory management


## Future improvements :
- Computers taking into account the other player strategy (block winning move)
- Better board graphics
- Playable outside the terminal


## Lessons Learned

During this project I learned:

- 2D arrays
- Modular programming
- Build automation using Make
- Basic AI decision making


## Example :

```text
START OF THE GAME !

____________________________
|   |   |   |   |   |   |   | 6
____________________________
|   |   |   |   |   |   |   | 5
____________________________
|   |   |   |   |   |   |   | 4
____________________________
|   |   |   |   |   |   |   | 3
____________________________
|   |   |   |   |   |   |   | 2
____________________________
|   |   |   |   |   |   |   | 1
____________________________
  1   2   3   4   5   6   7 
Computer1 choose to play in column 5
____________________________
|   |   |   |   |   |   |   | 6
____________________________
|   |   |   |   |   |   |   | 5
____________________________
|   |   |   |   |   |   |   | 4
____________________________
|   |   |   |   |   |   |   | 3
____________________________
|   |   |   |   |   |   |   | 2
____________________________
|   |   |   |   | X |   |   | 1
____________________________
  1   2   3   4   5   6   7 
James, in which column do you want to play ? > 
```