//
//  main.cpp
//  A4 Problem 1
//
//  Created by Justine Prajitno on 12/15/25.
//

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    // Declare variables
    string name, gender, bmiStatus;
    int age = 0;
    int heightFeet = 0, heightInches = 0;
    int totalInches = 0;
    double weight = 0.0;
    double bmi = 0.0;

    // Ask the user
    cout << "Please enter your name: ";
    getline (cin, name);

    cout << "Please enter your age: ";
    cin >> age;

    cout << "Please enter your gender (male/female): ";
    cin >> gender;

    cout << "Please enter your height in feet: ";
    cin >> heightFeet;

    cout << "Please enter your height in inches: ";
    cin >> heightInches;

    cout << "Please enter your weight in pounds: ";
    cin >> weight;

    // Convert height to total inches
    totalInches = (heightFeet * 12) + heightInches;

    // Calculate BMI
    bmi = (703 * weight) / (totalInches * totalInches);

    // Determine BMI status
    if (bmi < 18.5)
        bmiStatus = "Underweight";
    else if (bmi < 25)
        bmiStatus = "Normal";
    else if (bmi < 30)
        bmiStatus = "Overweight";
    else
        bmiStatus = "Obese";

    // Output results
    cout << fixed << setprecision(1);
    cout << endl;
    cout << "Hi " << name << "," << endl;
    cout << "You are a " << gender << ". You are " << age << " years old. ";
    cout << "You are currently " << heightFeet << "'" << heightInches;
    cout << " and you currently weigh " << weight << " pounds. ";
    cout << "Your BMI is " << bmi << ", which is " << bmiStatus << "." << endl;
    cout << endl;
    cout << "Thank you for using the BMI Calculator!" << endl;

    return 0;
}
