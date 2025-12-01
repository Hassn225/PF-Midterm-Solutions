// Author: Hassan Zeb
// University of Gujrat
// Course: CS-102 (Programming Fundamentals)
// Midterm Exam – Fall 2025
// Program to sort an array in ascending order using functions

#include <iostream>
using namespace std;

// Function to sort array in ascending order
void sortArray(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Function to display array
void displayArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Sorting array
    sortArray(arr, n);

    // Displaying sorted array
    cout << "Array in Ascending Order: ";
    displayArray(arr, n);

    return 0;
}
