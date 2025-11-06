//
//  main.cpp
//  Character Repetition
//
//  Created by Justine Prajitno on 11/1/25.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
       cout << setfill('-') << setw(60) << "-" << endl;
       cout << setfill(' ') << setw(10) << " " << "Welcome to the Car Rental Estimator" << " " << endl;
       cout << setfill('=') << setw(60) << "=" << endl;

        // Declare variables
        int rentalDays = 0;
        double dailyRate = 0.0, insurancePerDay = 0.0;
        double milesDriven = 0.0, mileageAllowance = 0.0, overMileageCharge = 0.0;
        double baseCost = 0.0, insuranceCost = 0.0, mileageLimit = 0.0;
        double excessMiles = 0.0, overageFee = 0.0, totalCost = 0.0;
        
        // Ask user for input
        cout << "Enter number of rental days: ";
        cin >> rentalDays;
        cout << "Enter daily rental rate ($): ";
        cin >> dailyRate;
        cout << "Enter insurance per day ($): ";
        cin >> insurancePerDay;
        cout << "Enter total miles driven: ";
        cin >> milesDriven;
        cout << "Enter mileage allowance per day: ";
        cin >> mileageAllowance;
        cout << "Enter over-mileage charge per mile ($): ";
        cin >> overMileageCharge;
        
    // Calculations
       baseCost = rentalDays * dailyRate;
       insuranceCost = rentalDays * insurancePerDay;
       mileageLimit = rentalDays * mileageAllowance;
       excessMiles = (milesDriven - mileageLimit);
       excessMiles = (excessMiles + abs(excessMiles)) / 2; // makes negatives become 0
       overageFee = excessMiles * overMileageCharge;
       totalCost = baseCost + insuranceCost + overageFee;

       // Display output
    cout << endl;
       cout << setfill('=');
       cout << setw(35) << " CAR RENTAL INVOICE " << setw(15) << "=" << endl;
       cout << fixed << showpoint << setprecision(2);

       cout << setfill(' ');
       cout << left << setw(25) << "Rental Days:" << rentalDays << endl;
       cout << left << setw(25) << "Daily Rate:" << "$" << dailyRate << endl;
       cout << left << setw(25) << "Insurance per Day:" << "$" << insurancePerDay << endl;
       cout << setfill('-');
       cout << setw(45) << "-" << endl;
       cout << setfill(' ');

       cout << left << setw(25) << setfill('.') << "Base Cost:" << "$" << baseCost << endl;
       cout << left << setw(25) << setfill('.') << "Insurance Cost:" << "$" << insuranceCost << endl;
       cout << left << setw(25) << setfill('.') << "Mileage Limit:" << mileageLimit << " miles" << endl;
       cout << left << setw(25) << setfill('.') << "Miles Driven:" << milesDriven << " miles" << endl;
       cout << left << setw(25) << setfill('.') << "Excess Miles:" << excessMiles << " miles" << endl;
       cout << left << setw(25) << setfill('.') << "Overage Fee:" << "$" << overageFee << endl;

       cout << setfill('-');
       cout << setw(45) << "-" << endl;
       cout << setfill(' ');
       cout << left << setw(25) << "Total Cost:" << "$" << totalCost << endl;
       cout << setfill('=');
       cout << setw(45) << "=" << endl;
       cout << endl;
    
        return 0;
    }
