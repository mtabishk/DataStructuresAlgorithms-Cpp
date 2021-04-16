#include<bits/stdc++.h>
using namespace std;
int main()
{
    int size = 0;
    cin >> size;
    
    int even_sum = 0;
    int odd_sum = 0;

    int *parr = new int[size];
    for (int i=0; i < size; i++) {
        cin >> *(parr + i);
        
        if ( *(parr + i)%2 == 0 && i%2 ==0) even_sum += *(parr + i);
        else if ( *(parr + i)%2 != 0 && i%2 !=0) odd_sum += *(parr + i);

    }
    
    cout << even_sum << " " << odd_sum;
    
	return 0;
}
