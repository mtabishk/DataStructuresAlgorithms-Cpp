#include <iostream>
using namespace std;

int main()
{
    int num = 0;
    cout << "Enter any number to check for prime or not: ";
    cin >> num;

    bool isPrime = true;
    int i = 2;
    while (i < num)
    {
        if (num % i == 0)
        {
            isPrime = false;
        }
        i++;
    }

    cout << isPrime;
}