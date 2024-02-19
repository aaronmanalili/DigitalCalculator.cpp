// SimpleDigitalCalculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*
* 
*   SimpleDigitalCalculator.cpp by Aaron Manalili
* 
* 
*  Basic digital calculator that performs addition, subtraction, multiplication, division, and modulous of two intergers.
* 
*/

#include <iostream>
using namespace std;

int main()
{
    char operand; // the symbol the user will type to perform a math operation.
    int num1, num2;

    std::cout << "Type in +, -, *, /, or % to perform a mathmatical operation: ";
    cin >> operand; 

    std::cout << "Enter in the first number: ";
    cin >> num1; // Stores the first number

    std::cout << "Enter in the second number: ";
    cin >> num2; // Stores the second number

    switch (operand)
    {
        case '+':
            cout << num1 + num2; // Returns the sum of num1 + num2 if '+' char is selected.
            break;

        case '-':
            cout << num1 - num2; // Returns the difference of num1 - num2 if '-' char is selected.
            break;

        case '*':
            cout << num1 * num2; // Returns the result of num1 * num2 if '+' char is selected.
            break;

        case '/':
            cout << num1 / num2; // Returns the result of num1 / num2 if '/' char is selected.
            break;

        case '%':
            cout << num1 % num2; // Returns the remainder of num1 % num2 if '%' char is selected.
            break;

        default:
            cout << "You did not enter in a +, -, *, /, or % character."; // This cout statement prints out if a +, -, *, /, or % char is not selected and breaks.
    }

    return 0;

}
