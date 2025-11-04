//
//  main.cpp
//  A2 Problem 4
//
//  Created by Justine Prajitno on 10/30/25.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "****** Welcome to the Guest Profile Generator ******" << endl;

    // Declare variables for guest information
    string fullName, nickname, email, phone, cityState, occupation;
    string companySchool, hobby, color, quote;

    // Receive input
    cout << "Enter your full name: ";
    getline(cin, fullName);

    cout << "Enter your preferred name: ";
    getline(cin, nickname);

    cout << "Enter your email address: ";
    getline(cin, email);

    cout << "Enter your phone number: ";
    getline(cin, phone);

    cout << "Enter your city and state (city, state): ";
    getline(cin, cityState);

    cout << "Enter your occupation: ";
    getline(cin, occupation);

    cout << "Enter your company or school: ";
    getline(cin, companySchool);

    cout << "Enter your favorite hobby: ";
    getline(cin, hobby);

    cout << "Enter your favorite color: ";
    getline(cin, color);

    cout << "Enter a short quote or motto: ";
    getline(cin, quote);

    // Display output
    cout << endl;
    cout << "============== GUEST PROFILE SHEET ==============" << endl;
    cout << "Name: " << fullName << endl;
    cout << "Preferred Name: " << nickname << endl;
    cout << "Email: " << email << endl;
    cout << "Phone: " << phone << endl;
    cout << "Location: " << cityState << endl;
    cout << "Occupation: " << occupation << endl;
    cout << "Company/School: " << companySchool << endl;
    cout << "Hobby: " << hobby << endl;
    cout << "Favorite Color: " << color << endl;
    cout << "Quote: " << endl;
    cout << quote << endl;
    cout << "===============================================" << endl;
    cout << "Thank you for sharing your profile!" << endl;
    cout << "CMPS 301: Programming Concepts Fall 2025" << endl;

    return 0;
}
