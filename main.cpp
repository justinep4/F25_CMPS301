//
//  main.cpp
//  A3 Problem 2
//
//  Created by Justine Prajitno on 11/1/25.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
        cout << setfill('-');
        cout << setw(55) << " Welcome to your Budget & Savings Planner " << setw(10) << "-" << endl;
        cout << setfill('*');
        cout << setw(65) << "*" << endl;
        cout << endl;
        
        // Declare variables
        double income = 0.0, rent = 0.0, utilities = 0.0, groceries = 0.0, transportation = 0.0, savingsPercent = 0.0;
    
        // Ask for user input
        cout << "Enter your monthly income ($): ";
        cin >> income;
        cout << "Enter your rent or mortgage cost ($): ";
        cin >> rent;
        cout << "Enter your utilities cost ($): ";
        cin >> utilities;
        cout << "Enter your groceries cost ($): ";
        cin >> groceries;
        cout << "Enter your transportation cost ($): ";
        cin >> transportation;
        cout << "Enter your desired savings goal (% of income): ";
        cin >> savingsPercent;

        // Calculations
       double totalExpenses = rent + utilities + groceries + transportation;
       double savingsGoal = (savingsPercent / 100) * income;
       double remainingBalance = income - totalExpenses - savingsGoal;

       // Display output
       cout << endl;
       cout << setfill('=');
       cout << setw(35) << " MONTHLY BUDGET REPORT " << setw(15) << "=" << endl;
       cout << fixed << showpoint << setprecision(2);

       cout << setfill(' ');
       cout << left << setw(25) << "Monthly Income:" << "$" << income << endl;
       cout << setfill('-');
       cout << setw(45) << "-" << endl;
       cout << setfill(' ');

       cout << left << setw(25) << setfill('.') << "Rent / Mortgage:" << "$" << rent << endl;
       cout << left << setw(25) << setfill('.') << "Utilities:" << "$" << utilities << endl;
       cout << left << setw(25) << setfill('.') << "Groceries:" << "$" << groceries << endl;
       cout << left << setw(25) << setfill('.') << "Transportation:" << "$" << transportation << endl;

       cout << setfill('-');
       cout << setw(45) << "-" << endl;
       cout << setfill('.');

       cout << left << setw(25) << "Total Expenses:" << "$" << totalExpenses << endl;
       cout << left << setw(25) << "Savings Goal (" << savingsPercent << "%):" << "$" << savingsGoal << endl;
       cout << left << setw(25) << "Remaining Balance:" << "$" << remainingBalance << endl;

       cout << setfill('=');
       cout << setw(45) << "=" << endl;
       cout << endl;

       cout << "Thank you for using the PJ Budget & Savings Planner!" << endl;
    
        return 0;
    }
