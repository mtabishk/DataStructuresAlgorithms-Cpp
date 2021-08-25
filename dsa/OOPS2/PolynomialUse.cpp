#include "PolynomialClass.cpp"
#include <iostream>
using namespace std;

int main() {

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    /* Input Format :
    Line 1 : N, total number of terms in polynomial P1
    Line 2 : N integers representing degree of P1 (separated by space)
    Line 3 : N integers representing coefficients of P1 (separated by space)
    Line 4 : M, total number of terms in polynomial P2
    Line 5 : M integers representing degree of P2 (separated by space)
    Line 6 : M integers representing coefficients of P2 (separated by space)
    Line 7 : Integer C, choice representing the function to be called (See main for more details)
    E.g.,
    3
    1 3 5
    1 2 -4
    4
    0 1 2 3
    4 2 -3 1
    1
    Output:
    4x0 3x1 -3x2 3x3 -4x5
    */
    int count1, count2, choice;
    cin >> count1;

    int *degree1 = new int[count1];
    int *coeff1 = new int[count1];

    for (int i = 0; i < count1; i++) {
        cin >> degree1[i];
    }

    for (int i = 0; i < count1; i++) {
        cin >> coeff1[i];
    }

    Polynomial first;

    for (int i = 0; i < count1; i++) {
        first.setCoefficient(degree1[i], coeff1[i]);
    }

    cin >> count2;

    int *degree2 = new int[count2];
    int *coeff2 = new int[count2];

    for (int i = 0; i < count2; i++) {
        cin >> degree2[i];
    }

    for (int i = 0; i < count2; i++) {
        cin >> coeff2[i];
    }

    Polynomial second;

    for (int i = 0; i < count2; i++) {
        second.setCoefficient(degree2[i], coeff2[i]);
    }

    cin >> choice;

    Polynomial result;
    switch (choice) {
    // Add
    case 1:
        result = first + second;
        result.print();
        break;
    // Subtract
    case 2 :
        result = first - second;
        result.print();
        break;
    // Multiply
    case 3 :
        result = first * second;
        result.print();
        break;

    case 4 : // Copy constructor
    {
        Polynomial third(first);
        if (third.degCoeff == first.degCoeff) {
            cout << "false" << endl;
        }
        else {
            cout << "true" << endl;
        }
        break;
    }

    case 5 : // Copy assignment operator
    {
        Polynomial fourth(first);
        if (fourth.degCoeff == first.degCoeff) {
            cout << "false" << endl;
        }
        else {
            cout << "true" << endl;
        }
        break;
    }

    }

    return 0;
}