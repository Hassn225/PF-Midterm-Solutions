// Author: Hassan Zeb
// University of Gujrat
// Course: CS-102 (Programming Fundamentals)
// Midterm Exam – Fall 2025
// Question 3

#include <iostream>
using namespace std;

int main() {
    int inches, feet, remaining;

    cout << "Enter height in inches: ";
    cin >> inches;

    feet = inches / 12;
    remaining = inches % 12;

    cout << "Height = " << feet << " feet " << remaining << " inches";
    return 0;
}
