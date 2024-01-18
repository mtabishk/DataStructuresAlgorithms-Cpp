#include <iostream>
using namespace std;

/*
        *****
        *****
        *****
        *****
        *****

*/
void print_pattern_1(int count)
{
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < count; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

/*
        1111
        2222
        3333
        4444

*/

void print_pattern_2(int count)
{
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < count; j++)
        {
            cout << i + 1;
        }
        cout << endl;
    }
}

/*
 *****
 *   *
 *   *
 *   *
 *****
 */

void print_pattern_3(int count)
{
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < count; j++)
        {
            if (i == 0 || i == count - 1 || j == 0 || j == count - 1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}

/*
 *****
 *****
 *****
 *****
 *****
 */
void print_pattern_4(int count)
{
    for (int i = 0; i < count; i++)
    {
        int space = i;
        for (int j = 0; j < count; j++)
        {
            cout << "*";
        }
        cout << endl;
        for (int k = 0; k < space; k++)
        {
            cout << " ";
        }
        cout << " ";
    }
}

/*
 *
 ***
 *****
 *******
 */

void print_pattern_5(int count)
{
    for (int i = 1; i <= count; i++)
    {
        int space = count - i;
        for (int k = 1; k <= space; k++)
        {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

/*
 *
 */

void print_pattern_6(int count)
{
    for (int i = 1; i <= count; i++)
    {
        int space = count - i;
        for (int k = 1; k <= space; k++)
        {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            if (j == 1 || j == 2 * i - 1 || i == count)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}

void print_pattern_7(int count)
{
    for (int i = 1; i <= count; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = count - 1; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

int main()
{
    int count = 0;
    cout << "Enter the count: ";
    cin >> count;

    print_pattern_6(count);
}