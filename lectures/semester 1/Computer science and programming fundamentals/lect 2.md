# RAM

Each cell of RAM memory has its own address. 

Memory is finite. Instead of assuming a size, we can use sizeof to define or describe the size.

On an 8-bit space, we can fit 256 bits, and it's basically one byte. ASCII tables can represent certain sequences. 

## Values

int = numbers, for bytes
double, float = for real numbers

*Double and float aren't exactly precise.*

Never compare values when double; it's okay to compare int, though.

Values, types and storage locations are 3 different issues.

## Programs

Compiling code creates a file, eg. in the .exe format, somewhere on the PC. 

The computer executes a program running through:

Registers <> Cache <> RAM

Programs =/= processes

The same program can be launched several times, and processes can have different states.

Program = file, process = a running program

Inputs > processing > system state > outputs

*The processor doesn't execute python/C++ code.*

There is difference between the source code and the CPU instructions. 

## Differences in languages

C and C++ 

> work on a high level
> will provide extensive control over building and hardware

Python:

> less is needed to be specified
> more libraries and versality
> less prone to errors
> not tweakable in hardware/building
> slower

*High level lang =/= better lang*

Python looks better and is easier in programming. 

## IDE

IDE - Integrated Development Environment

It should be fit to everyone's needs individually. .cpp is not an executable program, so isn't .py

## Syntax & semantics

Syntax is the grammar of the code. WIthout proper code syntax, a syntax error will appear.

Semantics define the meaning of correctly written statements.

Correct syntax =/= correct programs

## Lang vs implementation/compiler

Python = language

CPython = implementation of the language

## Execution flow of python

program.py > parser > internal program representation > bytecode of Python > Python VM > code executing on the CPU

## Execution flow of C++

main.cpp > preprocessor > expanded source code > compiler > main.o / main.obj > linker > .exe > execution

## C++ matters

 include <iostream> means:
Make declarations available

Header files:
.h
.hpp