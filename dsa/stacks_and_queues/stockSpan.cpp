#include <iostream>
#include <climits>
using namespace std;

// Time Complexity : O(n^2) : bad
int* stockSpan(int *price, int size)  {
    // Write your code here
    int *temp = new int[size];
    int largest = INT_MIN;

    for (int i = 0; i < size; i++) {
        if (price[i] > largest) {
            temp[i] = i + 1;
            largest = price[i];
        } else {
            temp[i] = 1;
            int j = i - 1;
            while (price[i] > price[j]) {
                temp[i] += 1;
                j--;
            }
        }
    }
    return temp;
}

int main() {

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int size;
    cin >> size;

    int *input = new int[size];
    for (int i = 0; i < size; i++) {
        cin >> input[i];
    }

    int *output = stockSpan(input, size);
    for (int i = 0; i < size; i++) {
        cout << output[i] << " ";
    }

    cout << "\n";

    delete[] input;
    delete[] output;
}

