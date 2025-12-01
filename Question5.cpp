// Author: Hassan Zeb
// University of Gujrat
// Course: CS-102 (Programming Fundamentals)
// Midterm Exam – Fall 2025
// Question 5

#include <iostream>
using namespace std;

int main() {
    int n, sum = 0, max, min;

    cout << "Enter 10 numbers: ";

    cin >> n;
    sum = max = min = n;

    for (int i = 1; i < 10; i++) {
        cin >> n;

        sum += n;
        if (n > max) max = n;
        if (n < min) min = n;
    }

    cout << "Sum = " << sum << endl;
    cout << "Max = " << max << endl;
    cout << "Min = " << min;

    return 0;
}
