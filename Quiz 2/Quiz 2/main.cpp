//
//  main.cpp
//  Quiz 2
//
//  Created by Justine Prajitno on 11/3/25.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout << setfill('*');
    cout << setw(65) << "*" << endl;
    cout << setfill(' ');
    cout << setw(55) << " Welcome to the Rumah Kopi Cafe Order Calculator " << setw(10) << " " << endl;
    cout << setfill('*');
    cout << setw(65) << "*" << endl << endl;

    // Declare variables
    int smallQty, mediumQty, largeQty;
    double taxRate;
    double S_PRICE = 2.25;
    double M_PRICE = 3.00;
    double L_PRICE = 3.75;

    // Ask customer for input
    cout << "Enter number of small coffees: ";
    cin >> smallQty;
    cout << "Enter number of medium coffees: ";
    cin >> mediumQty;
    cout << "Enter number of large coffees: ";
    cin >> largeQty;
    cout << "Enter tax rate (%): ";
    cin >> taxRate;

    // Calculations
    double subtotal = (smallQty * S_PRICE) + (mediumQty * M_PRICE) + (largeQty * L_PRICE);
    double taxAmount = (taxRate/100.0) * subtotal;
    double total = subtotal + taxAmount;

    // Display order
    cout << endl;
    cout << setfill('=');
    cout << setw(35) << " RUMAH KOPI CAFE RECEIPT " << setw(15) << "=" << endl;
    cout << fixed << showpoint << setprecision(2);
    cout << endl;
   
    cout << setfill ('.'); // Reset to clean fill before receipt lines
    cout << left << setw(25) << "Small Coffees: " << right << "$" << setw(7) << (smallQty * S_PRICE) << endl;
    cout << left << setw(25) << "Medium Coffees: " << right << "$" << setw(7) << (mediumQty * M_PRICE) << endl;
    cout << left << setw(25) << "Large Coffees: " << right << "$" << setw(7) << "$" << (largeQty * L_PRICE) << endl;

    cout << setfill('-') << setw(45) << "-" << endl;
    cout << setfill('.');
    cout << left << setw(25) << "Subtotal: " << right << "$" << setw(7) << subtotal << endl;
    cout << left << setw(20);
    cout << "Tax (" << fixed << setprecision(1) << taxRate << "%):";
    cout << right << setfill('.') << "$" << setw(5) << setfill ('.') << fixed << setprecision(2) << taxAmount << endl;

    cout << setfill('-');
    cout << setw(45) << "-" << endl;
    cout << setfill('.');
    cout << left << setw(25) << "Total Amount Due:" << right << "$" << setw(7) << total << endl;

    cout << setfill('=');
    cout << setw(50) << "=" << endl;
    cout << endl;
    cout << "From the islands to your mug - terima kasih for sipping local!" << endl;
    
    return 0;
}
