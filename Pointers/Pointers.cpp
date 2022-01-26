// Pointers.cpp : This file contains the 'main' function. Program execution
// begins and ends there.
//

#include <iostream>
using namespace std;

int main() {
  int* intptr;  // Declare a pointer that holds the address
                // of a memory location that can store an integer.
                // Note the use of * to indicate this is a pointer variable.

  intptr = new int;  // Allocate memory for the integer.
  *intptr = 5;       // Store 5 in the memory address stored in intptr.

  int* x;  // Allocate the pointers x and y
  int* y;  // (but not the pointees).

  x = new int;  // Allocate an int pointee and set x to point to it.

  *x = 42;  // Dereference x and store 42 in its pointee

  *y = 13;  // CRASH -- y does not have a pointee yet

  y = x;  // Pointer assignment sets y to point to x's pointee

  *y = 13;  // Dereference y to store 13 in its (shared) pointee
}
