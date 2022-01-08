#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution
{
public:
    void sort012(int arr[], int n) {
        int low = 0;
        int mid = 0;
        int high = n - 1;

        for (int i = 0; i < n && mid < high; i++) {
            if (arr[i] == 0) {
                // swap
                int temp = arr[low];
                arr[low] = arr[i];
                arr[i] = temp;
                low++;
                mid++;
            } else if (arr[i] == 1) {
                mid++;
            } else if (arr[i] == 2) {
                int temp = arr[high];
                arr[high] = arr[i];
                arr[i] = temp;
                i--;
                high--;
            }
        }
    }

};

int main() {

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for (int i = 0; i < n; i++) {
            cout << a[i]  << " ";
        }

        cout << endl;


    }
    return 0;
}