# MONSTER ARENA
![C](https://img.shields.io/badge/language-C-blue.svg)
![License](https://img.shields.io/badge/license-MIT-green.svg)

A turn-based combat simulator where 100 monsters battle each other. There are multiple types of monsters that focus on one aspect. This project was built to strengthen my understanding of C structures, pointers, dynamic memory management and modular programming.

## Learning objectives

This project was developed to strengthen my understanding of:

- C structures
- Dynamic memory allocation
- Pointers
- Modular programming
- Build automation using Make

## Features : 
- Turn-based combat
- Multiple monster types
- Randomized attacks
- Health system
- Critical hits
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
./MonsterArena
```

## Technical notes :
- Memory usage has been verified with Valgrind to ensure no memory leaks during normal execution.
- Compiled with -Wall -Wextra -Werror -g.
- Here's the structure of the project :
```text
├── Arena.c
├── Makefile
├── Monster.c
├── Monster.h
├── README.md
└── Test.c
```

## Skills demonstrated :
- C programming
- Dynamic memory management
- Modular architecture
- Header file organization
- Build automation with Make

## Future improvements :
- Save and load battles
- Additional monster classes
- Multiplayer mode

## Lessons Learned

During this project I learned:

- How to organize a C project across multiple source files
- How to manipulate structures and pointers safely
- How to use dynamic memory allocation responsibly
- How to automate compilation with Make

## Example :
```text
 4 ROUND : 

The Orks uses its special capability !



 The monsters still alive are :

Type : Ork // Health : 1102 // Damages : 128
Type : Ork // Health : 1946 // Damages : 140
Type : Rock Golems // Health : 8167 // Damages : 15


 5 ROUND : 

The Orks uses its special capability !
The Rock Golems uses its special capability !



 The monsters still alive are :

Type : Ork // Health : 1935 // Damages : 175
1st defeated monster :

Type : Gobelins // Health : -9 // Damages : 25
2st defeated monster :

Type : Rock Golems // Health : -16 // Damages : 16
3st defeated monster :

Type : Rock Golems // Health : -76 // Damages : 16
4st defeated monster :

Type : Ork // Health : -70 // Damages : 76
5st defeated monster :

Type : Rock Golems // Health : -76 // Damages : 20
6st defeated monster :

Type : Rock Golems // Health : -23 // Damages : 19
7st defeated monster :

Type : Rock Golems // Health : -73 // Damages : 15
```