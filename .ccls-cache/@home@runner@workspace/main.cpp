#include <iostream>
/*
constants vs variables
variables can be changed (read/ write)
constants cannot be changed ( read only)

2 ways to declare constants in c/c++
1) we can use a preprocessor directive
    - only method in early c
2) we can use the const keyword
    - newer method
*/

// # define is the pp directive, MAX is the macro, 10 is the token
#define MAX 10 

int main() {
  std::cout << "the token of the MAX macro is " << MAX << std::endl;
  //MAX++; // MAX = MAX + 1

  const int i = 100; // const keyword to declare a constant variable
  std::cout << "The value of the constant variable i is " << i << std::endl;
  //i++;

  // what is an array name?
  // an array name is a constant pointer to te address of the first element in the array
  int array[3] = {100,200,300}; // array is a constant pointer
  int * p_array = array; // variable pointer (we can change it)
  p_array++;

  if (array == p_array) 
  {
    std::cout << "array and p_array have the same memory address!" << std::endl;
  }

  // pointer arithmetic (only works onvariable pointers)
  // ++,--,+,-
  std::cout << "array = " << array << std::endl;
  std::cout << "p_array = " << p_array << std::endl << std::endl;

  //pointer addition
  std::cout << "p_array = " << p_array << std::endl;
  std::cout << "p_array = " << (long)p_array << std::endl; // casting the pointer address to a long value
  std::cout << "*p_array = " << *p_array << std::endl << std::endl;
  std::cout << "p_array + 1 = " << p_array + 1 << std::endl;
  std::cout << "p_array + 1 = " << (long)(p_array + 1) << std::endl;
  std::cout << "*p_array = " << *(p_array + 1) << std::endl << std::endl;

  std::cout << "p_array + 2 = " << p_array + 2 << std::endl;
  std::cout << "p_array + 2 = " << (long)(p_array + 2) << std::endl;
  std::cout << "*p_array + 2 = " << *(p_array + 2) << std::endl << std::endl;
  std::cout << "p_array = " << p_array << std::endl << std::endl;
  
  std::cout << "the size of int is " << sizeof(int) << " bytes" << std::endl;

  // pointer subtraction
  p_array = &array[2];
  std::cout << "p_array = " << p_array << std::endl;
  std::cout << "p_array = " << (long)p_array << std::endl;
  std::cout << "*p_array = " << *p_array << std::endl << std::endl;

  std::cout << "p_array - 1 = " << p_array - 1 << std::endl;
  std::cout << "p_array - 1 = " << (long)(p_array - 1) << std::endl;
  std::cout << "*(p_array - 1) = " << *(p_array - 1) << std::endl << std::endl;

  std::cout << "p_array - 2 = " << p_array - 2 << std::endl;
  std::cout << "p_array - 2 = " << (long)(p_array - 2) << std::endl;
  std::cout << "*(p_array - 2) = " << *(p_array - 2) << std::endl << std::endl;

  std::cout << "p_array = " << p_array << std::endl << std::endl;
  return 0;
}