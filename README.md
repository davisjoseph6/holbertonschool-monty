# Monty Interpreter

Monty Interpreter is a tool designed to parse and interpret [Monty bytecode](#monty-bytecode-files) files. Monty is a minimalistic scripting language that operates on a unique stack and provides specific instructions for manipulating it.

## Table of Contents
- [Stacks, Queues - LIFO, FIFO](#stacks-queues--LIFO-FIFO)
- [Requirements](#requirements)
- [Compilation & Execution](#compilation--execution)
- [The Monty Language](#the-monty-language)
- [Monty Bytecode Files](#monty-bytecode-files)
- [The Monty Program](#the-monty-program)
- [Supported Instructions](#supported-instructions)
- [Exit Status](#exit-status)
- [File Structure](#file-structure)
- [Testing](#testing)
- [Author](#author)

# Stacks, Queues - LIFO, FIFO

The following repository covers programs written in C for the Data structures and Algorithms curriculum at Holberton School. It covers stacks (LIFO) and queues (FIFO). The data structures are considered to have a limited access.

For example, in a stack, elements can be added or removed by push or pop following a linear order of Last In, First Out. Think of a stack as an actual stack of books. To get to the first book at the bottom, you must first remove the top book followed by the other books after it--in order to get to the bottom of the stack. 

In contrast, elements in a queue can be added in a First in, First out basis. Therefore, elements are added by an enqueue and removed by a dequeue. Think of it as a line of people onboarding a train, but the first person in becomes the first person to exit the train when deboarding. It has two points of access (the front and the back).

# Requirements

- Allowed editors: vi, vim, emacs
- All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic
- All your files should end with a new line
- A README.md file, at the root of the folder of the project is mandatory
- Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
- You allowed to use a maximum of one global variable
- No more than 5 functions per file
- You are allowed to use the C standard library
- The prototypes of all your functions should be included in your header file called monty.h
- Don’t forget to push your header file
- All your header files should be include guarded
- You are expected to do the tasks in the order shown in the project

# Compilation & Execution

Use the following command to compile the Monty Interpreter:

```shell
gcc -Wall -Werror -Wextra -pedantic *.c -o monty
```

> :information_source: The program's output is printed on `stdout`, while error messages are printed on `stderr`.

# The Monty Language

Monty 0.98 is a scripting language compiled into Monty bytecodes, similar to Python. It relies on a unique stack, with specific instructions to manipulate it. The goal of this project is to create an interpreter for Monty bytecode files.

# Monty Bytecode Files

Monty bytecode files have a `.m` extension. Each line in the file represents an instruction, which may have an optional argument. 

Characteristics of Monty bytecode files:

- Instructions are separated by new lines.
- Any number of spaces can appear before or after an opcode and its argument.
- Blank lines are allowed and may contain spaces.
- Any text following an opcode or its required argument is not considered.

For example, here is a Monty bytecode file named `byte.m`:

```
push 1
push 2
push 3
pall
```

You can execute it with:

```
./monty byte.m
```

Output:

```
3
2
1
```

# The Monty Program

Run the Monty program with the following command:

```
./monty file.m
```
# In case of any anomalies:

- If no file is provided or more than one argument is given, print the error message "USAGE: monty file" on `stderr`, followed by a new line, and exit with status `EXIT_FAILURE`.
- If it's not possible to open the file, print the error message "Error: Can't open file \<file\>" on `stderr`, followed by a new line, and exit with status `EXIT_FAILURE`.

# Supported Instructions

The Monty Interpreter supports the following instructions:

- `push`: Pushes an integer onto the stack.
- `pall`: Prints all values on the stack.
- `pint`: Prints the value at the top of the stack.
- `pop`: Removes the top element of the stack.
- `swap`: Swaps the top two elements of the stack.
- `add`: Adds the top two elements of the stack.
- `nop`: Does nothing.

# Exit Status

The Monty Interpreter returns the following exit statuses:

- `EXIT_SUCCESS` (0): Successful execution.
- `EXIT_FAILURE` (1): Error occurred during execution.

# File Structure

The Monty code is organized into the following files:

- `monty.h`: Header file containing function prototypes and data structures.
- `main.c`: Main entry point of the program, handles file reading and execution.
- `function.c`: Contains the function to execute Monty bytecode instructions.
- `opcode.c`: Contains functions to manipulate the stack (push, pop, swap, etc.).

# Tests

It is highly recommended to write a comprehensive set of tests to ensure the correctness of the Monty Interpreter. Collaborate with your team to create a test suite that covers all instructions and edge cases.

# Author

This Monty Interpreter was created by [Younes Saber] (https://github.com/seeyou7)  and [Davis Joseph](https://github.com/davisjoseph6).

