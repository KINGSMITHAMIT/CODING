// this code has some logical error - debug this code to solve the problem
//Alice has an array of N integers — 
//She wants the product of all the elements of the array to be a non-negative integer.
//That is, it can be either 
//0 or positive. But she doesn't want it to be negative.
//To do this, she is willing to remove some elements of the array.
//Determine the minimum number of elements that she will have to remove to make the product of the array's elements non-negative.
//INPUT:          //OUTPUT :  
//4                 
//3                   
//1 9 8              //0           
//4                       
//2 -1 9 100         //1         
//4                    
//2 -1 0 100         //0           
//4                        
//2 -1 -1 100        //0       


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
	    int A[N];
	    int count_neg = 0;
        int count_zero = 0;
	    for(int i = 0; i < N; i++)
	    {
	        cin >> A[i];
	    }
	    
        for(int i = 0; i < N; i++)
        {
          if(A[i]==0){
              count_zero++;
              
          }
          if(A[i]<0){
              count_neg++;
          }
        }
        if(count_zero>0)
        {
            cout<<0<<endl;
        }
        else if(count_neg%2==0)
        {
            cout<<0<<endl;
        }
        else if(count_neg%2!=0){
            cout<<1<<endl;
        }
        
       
	}
	return 0;
}
