#include<bits/stdc++.h>
using namespace std;
int main(){
cout<<"Radhe_Radhe"<<endl;
cout<<"Enter Num Of Test Cases"<<endl;
int t;
int x=1, y=77;
cout<<x.length()<<endl<<y.length()<<endl;
string a, b;
array n1[], n2[];
while(t--) {
Cout<<"Eter your num 1"<<endl;
cin>>a<<endl;
Cout<<"Eter your num 2"<<endl;
cin>>b<<endl;
    for(int i=(a.length()-1); i>=0; i--) {
        n1[i]= a;
return 0;
}
// Update the '_' in the code below to solve this problem

// #include <bits/stdc++.h>
// using namespace std;

// int main() 
// {
// 	/ your code goes here
// 	int t;
//     cin >> t;
	
// 	while(t--)
// 	{
// 	    string A,B;
// 	    cin >> A >> B;
// 	    int n=A.length();
// 	    int i = 0;
// 	    /Flag is a very imporant tool in programming problems - you will come across various examples in later problems as well
// 	    int flag = 0;	    
// 	    while(i < n)
// 	    {
// 	         Checking A from left to right and B from right to left
// 	        if ( A[i] == B[n - i - 1] )
// 	        {
// 	           i++ ;
// 	        }	        
// 	        else
// 	        {
// 	            / If specific character in A and B do not match, then they cannot be reverse
// 	            flag = 1;
//                     break;
// 	        }
// 	    }	    
// 	    if (flag == 1)
// 	    {
// 	        cout << "No" << endl;
// 	    }	    
// 	    else
// 	    {
// 	        cout << "Yes" << endl;
// 	    }    	
// 	}
// return 0;
// }