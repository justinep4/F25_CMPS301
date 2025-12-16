//
//  main.cpp
//  A4 Problem 3
//
//  Created by Justine Prajitno on 12/15/25.
//

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    double num1 = 0.0, num2 = 0.0;
    double result = 0.0;
    string operation;

    cout << "=========== BASIC MATH CALCULATOR ===========" << endl;
    cout << "Available operations:" << endl;
    cout << "+  -  *  /  %  ^" << endl;
    cout << "sin  asin  cos  acos  tan  atan  atan2" << endl;
    cout << "sqrt  ceil  abs  floor  max  min" << endl;
    cout << "log  log10  log2  round" << endl;
    cout << endl;

    cout << "Enter the operation you want to perform: ";
    cin >> operation;

    cout << fixed << setprecision(4);

    // TWO-NUMBER OPERATIONS
    if (operation == "+" || operation == "-" || operation == "*" ||
        operation == "/" || operation == "%" || operation == "^" ||
        operation == "max" || operation == "min" || operation == "atan2")
    {
        cout << "Enter first number: ";
        cin >> num1;
        cout << "Enter second number: ";
        cin >> num2;
    }
    else
    {
        // ONE-NUMBER OPERATIONS
        cout << "Enter a number: ";
        cin >> num1;
    }

    // Calculations
    if (operation == "+")
        result = num1 + num2;
    else if (operation == "-")
        result = num1 - num2;
    else if (operation == "*")
        result = num1 * num2;
    else if (operation == "/")
        result = num1 / num2;
    else if (operation == "%")
        result = fmod(num1, num2);
    else if (operation == "^")
        result = pow(num1, num2);
    else if (operation == "sin")
        result = sin(num1);
    else if (operation == "asin")
        result = asin(num1);
    else if (operation == "cos")
        result = cos(num1);
    else if (operation == "acos")
        result = acos(num1);
    else if (operation == "tan")
        result = tan(num1);
    else if (operation == "atan")
        result = atan(num1);
    else if (operation == "atan2")
        result = atan2(num1, num2);
    else if (operation == "sqrt")
        result = sqrt(num1);
    else if (operation == "ceil")
        result = ceil(num1);
    else if (operation == "abs")
        result = abs(num1);
    else if (operation == "floor")
        result = floor(num1);
    else if (operation == "max")
        result = fmax(num1, num2);
    else if (operation == "min")
        result = fmin(num1, num2);
    else if (operation == "log")
        result = log(num1);
    else if (operation == "log10")
        result = log10(num1);
    else if (operation == "log2")
        result = log2(num1);
    else if (operation == "round")
        result = round(num1);
    else
    {
        cout << "Invalid operation entered." << endl;
        return 0;
    }

    cout << endl;
    cout << "Answer: " << result << endl;
    cout << "===========================================" << endl;

    return 0;
}
