//
//  main.cpp
//  A4 Problem 2
//
//  Created by Justine Prajitno on 12/15/25.
//

#include <iostream>
using namespace std;

int main()
{
    int month = 0, day = 0, year = 0;
    char choice = 'Y';

    cout << "Welcome to Birthday Date Meaning Generator!" << endl;

    while (choice == 'Y' || choice == 'y')
    {
        cout << endl;
        cout << "Please enter the month of your birthday (1-12): ";
        cin >> month;

        cout << "Please enter the day of your birthday: ";
        cin >> day;

        cout << "Please enter the year of your birthday (2000-2023): ";
        cin >> year;

        cout << endl;

        // Month meaning
        switch (month)
        {
            case 1:  cout << "The month of January means Janus." << endl; break;
            case 2:  cout << "The month of February means Purification." << endl; break;
            case 3:  cout << "The month of March means War." << endl; break;
            case 4:  cout << "The month of April means Opening." << endl; break;
            case 5:  cout << "The month of May means Growth." << endl; break;
            case 6:  cout << "The month of June means Youth." << endl; break;
            case 7:  cout << "The month of July means Leadership." << endl; break;
            case 8:  cout << "The month of August means Strength." << endl; break;
            case 9:  cout << "The month of September means Wisdom." << endl; break;
            case 10: cout << "The month of October means Balance." << endl; break;
            case 11: cout << "The month of November means Reflection." << endl; break;
            case 12: cout << "The month of December means Completion." << endl; break;
            default: cout << "Invalid month entered." << endl;
        }

        // Day meaning
        switch (day)
        {
            case 1: cout << "The 1st day means Self-Starter and Determined." << endl; break;
            case 2: cout << "The 2nd day means Problem-Solver and Wise." << endl; break;
            case 3: cout << "The 3rd day means Charismatic and Communicator." << endl; break;
            case 4: cout << "The 4th day means Hard Worker and Perseverer." << endl; break;
            case 5: cout << "The 5th day means Adaptable and Opportunity-Taker." << endl; break;
            default: cout << "This day has a unique personality!" << endl;
        }

        // Year meaning
        switch (year)
        {
            case 2000: cout << "The year of 2000 means that you are a Millennial." << endl; break;
            case 2001: cout << "The year of 2001 means New Beginnings." << endl; break;
            case 2002: cout << "The year of 2002 means Balance." << endl; break;
            case 2003: cout << "The year of 2003 means Creativity." << endl; break;
            default: cout << "This year carries a special generational meaning!" << endl;
        }

        cout << endl;
        cout << "Would you like to try another one? (Y/N): ";
        cin >> choice;
    }

    cout << endl;
    cout << "Thanks for playing, hope you had fun!" << endl;

    return 0;
}
