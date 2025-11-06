//
//  main.cpp
//  Assignment 1
//
//  Created by Justine Prajitno on 9/29/25.
//

#include <iostream>
#include <string>
using namespace std;

int main() {
    //Declare and initialize variables
    string name = "";
    string nname = "";
    int age = 0;
    string height = "";
    string city = "";
    int pets = 0;
    string color = "";
    string food = "";
    string genre = "";
    string dest = "";
    
    //Ask the user
    cout << "Enter your full name: ";
    getline (cin, name);
    
    cout << "Enter your nickname: ";
    cin>> nname;
    
    cout << "Enter your age: ";
    cin >> age;
    cin.ignore();
    
    cout << "Enter your height (feet and inches): ";
    getline (cin, height);
    
    cout << "Enter your city of birth: ";
    getline (cin, city);
    
    cout << "Enter the number of pets you own: ";
    cin >> pets;
    
    cout << "Enter your favorite color: ";
    cin >> color;
    cin.ignore();
    
    cout << "Enter your favorite food: ";
    getline (cin, food);
    
    cout << "Enter your favorite genre of music: ";
    getline (cin, genre);
    
    cout << "Enter your dream destination: ";
    getline (cin, dest);
    
    //Display the output
    cout << endl;
    cout << "******************** Get to Know Me! ********************" << endl << endl;
    
    cout << "Full Name: " << name << endl;
    cout << "Nickname:  " << nname << endl;
    cout << "Age:  " << age << endl;
    cout << "Height:  " << height << endl;
    cout << "City of Birth:  " << city << endl;
    cout << "Number of Pets:  " << pets << endl;
    cout << "Favorite Color:  " << color << endl;
    cout << "Favorite Food:  " << food << endl;
    cout << "Favorite Music Genre:  " << genre << endl;
    cout << "Dream Destination:  " << nname << endl << endl;
   
    cout << "**************************************************" << endl << endl;
    
    cout << "What a pleasure to meet you! My name is " << name << " but I love to go by " << nname << ". I'm " << age << " years old and am from " << city << ". I enjoy listening to " << genre << " music and am the biggest fan of " << food << ". One day, I would love to visit " << dest << " for vacation. How about you?" << endl;
    
    return 0;
}
