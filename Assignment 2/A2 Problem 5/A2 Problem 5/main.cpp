//
//  main.cpp
//  A2 Problem 5
//
//  Created by Justine Prajitno on 10/30/25.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "********** Welcome to Cinema XXI Reservation Hub **********" << endl;

    // Declare variables
    string customerName, movieTitle, showtime, seatNumber, theaterLocation;
    int theaterNumber, numTickets;
    double ticketPrice;

    // Collect input
    cout << "Enter customer name: ";
    getline(cin, customerName);

    cout << "Enter movie title: ";
    getline(cin, movieTitle);

    cout << "Enter showtime: ";
    getline(cin, showtime);

    cout << "Enter theater number: ";
    cin >> theaterNumber;
    cin.ignore();

    cout << "Enter seat number: ";
    getline(cin, seatNumber);

    cout << "Enter number of tickets: ";
    cin >> numTickets;

    cout << "Enter ticket price per person: ";
    cin >> ticketPrice;
    cin.ignore();

    cout << "Enter theater location: ";
    getline(cin, theaterLocation);

    // Calculations
    double total = numTickets * ticketPrice;

    // Diplay output 
    cout << endl;
    cout << "=*=*=*=*=*=*=*= CINEMAGIC TICKET CONFIRMATION =*=*=*=*=*=*=*=" << endl;
    cout << "Customer: " << customerName << endl;
    cout << "Movie: " << movieTitle << endl;
    cout << "Showtime: " << showtime << endl;
    cout << "Theater: " << theaterNumber << endl;
    cout << "Seat: " << seatNumber << endl;
    cout << "Location: " << theaterLocation << endl;
    cout << "Tickets: " << numTickets << endl;
    cout << "Price per Ticket: $" << ticketPrice << endl;
    cout << "----------------------------------------" << endl;
    cout << "Total: $" << total << endl;
    cout << "=*=*=*=*=*=*=*=*==*=*=*=*=*=*=*=*==*=*=*=*=*=*=*=*==*=*=*=*=*=" << endl;
    cout << "Enjoy the show!" << endl;
    cout << "CMPS 301: Programming Concepts Fall 2025" << endl;

    return 0;
}
