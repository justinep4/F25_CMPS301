//
//  main.cpp
//  A2 Problem 1
//
//  Created by Justine Prajitno on 10/29/25.
//

#include <iostream>
#include <string>
using namespace std;

int main ()
{
    cout << "************ Welcome to JJ Tech Store Invoice Generator ************" << endl;

    // Declare variables
    string item1, item2, accessory;
    double price1, price2, price3;

    // Ask the user
    cout << "Enter name of Item #1: ";
    getline (cin, item1);
    cout << "Enter price: ";
    cin >> price1;
    cin.ignore();

    cout << "Enter name of  Item #2: ";
    getline (cin, item2);
    cout << "Enter price: ";
    cin >> price2;
    cin.ignore();

    cout << "Enter name of Accessory: ";
    getline (cin, accessory);
    cout << "Enter price: ";
    cin >> price3;

    // Calculations
    double subtotal = price1 + price2 + price3;
    double taxRate = 0.067;
    double salesTax = subtotal * taxRate;
    double total = subtotal + salesTax;

    // Display the output
    cout << endl;
    cout << "============================ INVOICE ============================" << endl;
    cout << item1 << ":\t$" << price1 << endl;
    cout << item2 << ":\t$" << price2 << endl;
    cout << accessory << ":\t$" << price3 << endl;
    cout << "-----------------------------------------------------------------" << endl;
    cout << "Subtotal:\t$" << subtotal << endl;
    cout << "Sales Tax (6.7%):\t$" << salesTax << endl;
    cout << "Total:\t\t$" << total << endl;
    cout << "===================================================================" << endl;
    cout << "Thank you for shopping with us. Have a blessed day!" << endl;

    return 0;
}
