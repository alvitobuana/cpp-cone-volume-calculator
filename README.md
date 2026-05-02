# Cone Volume Calculator (C++)

A simple C++ program to calculate the volume of a cone using a modular programming approach. The program separates structure definitions, function implementation, and main execution into different files.

## Features

* Input radius and height of a cone
* Calculate cone volume using formula:
  V = (1/3) × π × r² × t
* Modular structure using header and source files

## Project Structure

* `main.cpp` – handles user input and program execution
* `kerucut.cpp` – contains volume calculation logic
* `kerucut.h` – defines the cone structure

## How to Run

1. Compile the program:

   ```bash
   g++ main.cpp kerucut.cpp -o cone
   ```
2. Run the executable:

   ```bash
   ./cone
   ```

## Concepts Used

* Struct in C++
* Header and source file separation
* Function-based modular programming
* Basic mathematical computation

## Purpose

This project was created to practice modular programming in C++ and understand how to separate logic into multiple files.
