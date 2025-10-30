//
//  main.cpp
//  A1 Problem 3
//
//  Created by Justine Prajitno on 9/29/25.
//

#include <iostream>
using namespace std;

int main()
{
    //Declare variables
    double paycheck = 3200.00;
    
    double housing = 1200.00;
    double gas = 140.00;
    double groceries = 300.00;
    double carInsurance = 180.00;
    double healthVisits = 100.00;
    double subscriptions = 45.00;
    double gymMembership = 60.00;
    double merchandise = 90.00;
    double phoneBill = 85.00;
    double travel = 200.00;

    double savePercent = 0.40;

    //Calculations
    double totalExpenses = housing + gas + groceries + carInsurance + healthVisits +
                           subscriptions + gymMembership + merchandise + phoneBill + travel;

    double remainingBalance = paycheck - totalExpenses;
    double amountSaved = remainingBalance * savePercent;
    double spendingMoney = remainingBalance - amountSaved;

    //Display output
    cout << "********************* MONTHLY BUDGET BREAKDOWN *********************\n\n";

    cout << "Paycheck Received:\t\t$" << paycheck << ".00\n\n";

    cout << "--------------------- EXPENSES THIS MONTH -------------------------\n";
    cout << "Housing:\t\t\t\t$" << housing << ".00\n";
    cout << "Gas:\t\t\t\t\t$" << gas << ".00\n";
    cout << "Groceries:\t\t\t\t$" << groceries << ".00\n";
    cout << "Car Insurance:\t\t\t$" << carInsurance << ".00\n";
    cout << "Health Visits:\t\t\t$" << healthVisits << ".00\n";
    cout << "Subscriptions:\t\t\t$" << subscriptions << ".00\n";
    cout << "Gym Membership:\t\t\t$" << gymMembership << ".00\n";
    cout << "Merchandise:\t\t\t$" << merchandise << ".00\n";
    cout << "Phone Bill:\t\t\t\t$" << phoneBill << ".00\n";
    cout << "Travel:\t\t\t\t\t$" << travel << ".00\n\n";

    cout << "Total Expenses:\t\t\t$" << totalExpenses << ".00\n";
    cout << "Remaining Balance:\t\t$" << remainingBalance << ".00\n\n";

    cout << "-------------------- SAVINGS & DISCRETIONARY --------------------\n";
    cout << "You decided to save 40% of what's left.\n";
    cout << "Amount Saved:\t\t\t$" << amountSaved << ".00\n";
    cout << "Spending Money Left:\t$" << spendingMoney << ".00\n";

    cout << "\n*****************************************************************\n";
    cout << "Give thanks in all circumstances. - 1 Thessalonians 5:18\n";
    cout << "*****************************************************************\n";

    return 0;
}
