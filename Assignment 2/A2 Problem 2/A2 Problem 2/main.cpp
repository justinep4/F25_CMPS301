//
//  main.cpp
//  A2 Problem 2
//
//  Created by Justine Prajitno on 10/29/25.
//

#include <iostream>
using namespace std;

int main()
{
    cout << "--------------- Welcome to GG's Photography Trip Planner ---------------" << endl;
    
    // Declare variables
    double distA, distB, distC;
    double mpg, gasPrice;
    double gearWeight;
    
    // Ask the user
    cout << "Miles to Location A: ";
    cin >> distA;
    cout << "Miles to Location B: ";
    cin >> distB;
    cout << "Miles to Location C: ";
    cin >> distC;
    cout << "Fuel efficiency (MPG): ";
    cin >> mpg;
    cout << "Gas price per gallon: ";
    cin >> gasPrice;
    cout << "Camera gear weight (lbs): ";
    cin >> gearWeight;
    
    // Calculations
        double totalDistance = distA + distB + distC;
        double fuelCost = (totalDistance/mpg) * gasPrice;
        double weightFee = 0.15 * gearWeight * (totalDistance/100);
        double totalCost = fuelCost + weightFee;

        // Display output
        cout << endl;
        cout << "=============== GG PHOTOGRAPHY TRIP PLANNER ===============" << endl;
        cout << "Total Distance: " << totalDistance << " miles" << endl;
        cout << "Fuel Efficiency: " << mpg << " MPG" << endl;
        cout << "Gas Price: $" << gasPrice << endl;
        cout << "Camera Gear Weight: " << gearWeight << " lbs" << endl;
        cout << "-----------------------------------------------" << endl;
        cout << "Estimated Fuel Cost: $" << fuelCost << endl;
        cout << "Weight Fee Estimate: $" << weightFee << endl;
        cout << "-----------------------------------------------" << endl;
        cout << "Estimated Total Cost: $" << totalCost << endl;
        cout << "====================================================" << endl;
        cout << "Find the light. Enjoy the ride!" << endl;

    return 0;
}
