// largestOfThree.cpp
//
// Programmer's name: Dennis Mohle
// Date: Aug 16, 2023
//
// Description of program:
//
// TODO: Describe your program in terms of input, processing, and output
//
// This program will input...
//
//
// References:
//
// Getting started:
// https://www.w3schools.com/cpp/cpp_getstarted.asp
// User Input:
// https://www.w3schools.com/cpp/cpp_user_input.asp
// Strings:
// https://www.w3schools.com/cpp/cpp_strings.asp

#include <iostream>
#include <string>

int main(){

  int num1, num2, num3;
  int largest;
  std::string name;

  std::cout << "\nWelcome to the Largest of Three Program.\n\n";

  // INPUT
  std::cout << "Please input your name: ";
  std::getline(std::cin, name);

  std::cout << "Please input the integers you would like to compare.\nFirst: ";
  std::cin >> num1;
  std::cout << "Second: ";
  std::cin >> num2;
  std::cout << "Third: ";
  std::cin >> num3;

  // PROCESSING
  if (num1 > num2) {
    largest = num1;
  } else {
    largest = num2;
  }
  if (num3 > largest) {
    largest = num3;
  }

  // OUTPUT
  std::cout << "\nThank you " << name << ".\n";
  std::cout << "Your largest integer was " << largest << "." << std::endl;

  return 0;
}


