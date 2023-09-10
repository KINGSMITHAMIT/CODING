// Update the '_' in the code below to solve the problem

#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int t;
    cin >> t;
	
	while(t--)
	{
	    int N;
	    cin >> N;
	    // array to hold all integers of the number
	    int final_ans[7];
	    int j = 0;
	    
	    while(N>0)
	    {
	        // insert the last digit of N the start of the array
	        final_ans[j] = N%10;
	        // update N as N/10 - removes the last digit of n
	        N = N/10;
	        j++;
	    }
	    // We need to traverse from the right to left of the array as we inserted the last digit to the start of the array
	    for(int i = j-1; i >= 0; i--)
	    {
	        cout << final_ans[i] << " ";
	    }
	    
	    cout << endl;
	}
}