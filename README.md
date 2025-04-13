# C++ Programs

## Overview

This repository contains C++ programs demonstrating various concepts.

- **CheckLetterCaseAndStringType.cpp**: This program checks if the input string contains only uppercase letters or lowercase letters and identifies the position of any lowercase letters. It also verifies if the string contains only alphabetic characters.
- **VectorSubsequenceCheck.cpp**: This program compares two vectors and checks if the shorter vector is a subsequence of the longer vector. It returns true if all elements of the shorter vector appear in the longer vector in the same order, otherwise false.
- **RemoveEveryIthCharacter.cpp**: This program removes every ith character from the input string using recursion. It shifts the subsequent characters left to fill the gaps created by the removed characters.
- **DiceRollCombinations.cpp**: This program calculates the number of ways to achieve a target sum by rolling n dice, where each die can land on a value from 1 to 4. It uses recursion to explore all possible combinations.
- **MergeSortAndRemoveDuplicates.cpp**: This program merges two sorted vectors while removing any duplicate values, ensuring that each element appears only once in the resulting merged vector. It efficiently handles merging and avoids adding duplicate elements during the merge process.
- **ClassOperations.cpp**: This program demonstrates the use of the header class, which handles operations such as initializing objects with default or custom values, comparing objects for equality, and performing arithmetic operations like adding a value to all member variables. It also includes operator overloading for output streaming and comparison.
- **EvenCopyArray.cpp**: This program defines a function even_copy that takes an integer array and its size as input. It counts the even numbers in the array, creates a new array with the original elements and the even elements appended, and returns the new array. The size of the array is updated via a reference to reflect the new size after the even numbers are added. The program then prints the modified array and frees the dynamically allocated memory.
- **ArrayOperation.cpp**: This program demonstrates the use of the quiz8 class to create arrays with custom initialization, copy arrays using the copy constructor, and assign one array to another using the assignment operator. It initializes arrays with specific values, prints them, and shows how the copy constructor and assignment operator work with arrays of different sizes.
- **DoubleOddsLinkedList.cpp**: This program defines a linked list structure and demonstrates the function double_odds, which duplicates the odd numbers in the list. The add_to_head function adds new nodes to the head of the list, and the print function displays the list. The program shows the transformation of the linked list by duplicating the odd numbers and printing the modified list.
- **CheckPatternPresence.cpp**: This program checks if a given pattern exists as a subsequence within a string using recursion. It utilizes a helper function to compare characters from both the string and the pattern. The results are displayed as "true" or "false" based on whether the pattern is found in the string.
- **DiceRollCombinationsUsingStack.cpp**: This program simulates rolling a dice with 4 faces and calculates the number of ways to achieve a target sum using a given number of rolls. It uses a stack-based approach to explore all possible combinations of dice rolls. The result is displayed as the total count of ways to reach the target sum.

Each program is designed to help with specific real-world problems.

## Usage

### Prerequisites:
- C++ Compiler: A C++ compiler such as G++ (part of GCC) or Clang is required to compile and run these programs.
- IDE: You can use Visual Studio, Code::Blocks, CLion, or Eclipse CDT for C++ development.

### Running the Programs:

1. Clone this repository to your local machine:
   ```bash
   git clone https://github.com/tarandeepk02/CPP-Programming
   ```
2. Navigate to the folder containing the program file you wish to run.
3. Compile and run the programs using the following commands:
     ```
     g++ -std=c++17 <ProgramName>.cpp
     ```
4. Run the program:
   ```
   .\a
   ```     
