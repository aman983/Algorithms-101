# Stack Implementation in C

This repository contains a simple implementation of a stack data structure in C programming language. The stack is implemented using an array and includes basic operations such as push, pop, peek, checking if the stack is empty or full, and creating/freeing the stack.

## 📝 Introduction

A stack is a linear data structure that follows the Last In, First Out (LIFO) principle. It means that the element which is inserted last will be the first one to be removed. This implementation provides functions to perform various operations on the stack.

## 🛠️ Implementation

The stack is implemented using a structure called `stack_struct` which contains the following fields:
- `top`: Represents the index of the top element in the stack.
- `size`: Represents the maximum size of the stack.
- `stack`: An array to store the elements of the stack.

The following operations are implemented:
- `create_stack()`: Creates a new stack and returns a pointer to it.
- `free_stack()`: Frees the memory allocated for the stack.
- `push()`: Pushes an element onto the stack.
- `pop()`: Pops (removes and returns) the top element from the stack.
- `peek()`: Returns the value of the top element without removing it.
- `is_empty()`: Checks if the stack is empty.
- `is_full()`: Checks if the stack is full.

## 🚀 Usage

To use this stack implementation, you can include the provided source code files in your C project. You can modify the `main()` function in `stack.c` file to test the functionality or integrate the stack into your own project as needed.

Compile the code using a C compiler such as GCC:  <code>gcc stack.c -o stack</code>
