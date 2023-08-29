// Update the '_' in the code below to solve the problem

#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int t;
    cin >> t;
	
	while(t--)
	{
	    int A,B;
	    cin >> A >> B;
	    // Decare variables for lower and higher of the 2 numbers
	    int minAB = min(A,B);
        int maxAB = max(A,B);
        int flag = 0;
        
        while (minAB <= maxAB)
        {
          // condition is met, hence set flag = 1    
          if (minAB == maxAB)  
          {
            flag = 1;
            break;
          }    
          else
          {
            //update the minimum value as per the problem statement
            minAB = minAB*2;  
          }      
        }
        
        if (flag == 1)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
	}
}	