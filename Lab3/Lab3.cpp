// Lab3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

void printMenu(int& choice) {
    cout << "Welcome to Kaden's amazing platform! Please select an option to perform:" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;

    cout << "\nYour Selection: ";
    cin >> choice;
}

void getChoices(float& A, float& B) {
    cout << "Please enter the first value: ";
    cin >> A;
    cout << "Please enter the second value: ";
    cin >> B;
    cout << "\n";
}

void add(float& A, float& B) {
    float total;
    total = A + B;
    cout << A << " + " << B << " = " << total << endl;
}

void subtract(float& A, float& B) {
    float total;
    total = A - B;
    cout << A << " - " << B << " = " << total << endl;
}

void multiply(float& A, float& B) {
    float total;
    total = A * B;
    cout << A << " * " << B << " = " << total << endl;
}

void divide(float& A, float& B) {
    float total;
    total = A / B;
    cout << A << " / " << B << " = " << total << endl;
}

int main()
{
    int choice;
    float A;
    float B;

    printMenu(choice);
    getChoices(A, B);

    if (choice == 1) {
        add(A, B);
    }
    else if (choice == 2) {
        subtract(A, B);
    }
    else if (choice == 3) {
        multiply(A, B);
    }
    else if (choice == 4) {
        divide(A, B);
    }

}
