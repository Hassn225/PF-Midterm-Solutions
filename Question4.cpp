// Author: Hassan Zeb
// University of Gujrat
// Course: CS-102 (Programming Fundamentals)
// Midterm Exam – Fall 2025
// Question 4

#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    if (a % b == 0)
        cout << a << " is a multiple of " << b;
    else
        cout << a << " is NOT a multiple of " << b;

    return 0;
}
