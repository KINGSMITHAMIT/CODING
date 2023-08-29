// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// cout<<"RADHE_RADHE"<<endl;
// int n, m;
// array N[], M[];
// cout<<"Enter your first number: "<<endl;
// cin>>n;
// cout<<"Enter your second number: "<<endl;
// cin>>m;

// for(int i=0;i<n;i++){

// return 0;
// }
// Solution as follows

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
	    int divisors_AandB[100];
	    int i=1;
	    int j=0;
	    while (i <= min(A,B))
	    {
	        //i needs to divide both A and B
            if (A % i == 0 and B % i == 0)
            {
                //#append the integer to the list
                divisors_AandB[j]=i;
                j++;
            }
            i++;
	    }
	    //gcd is the greatest common divisor
        int gcd = *max_element(divisors_AandB,divisors_AandB+j);
        //math property
        int lcm = (A*B)/(gcd);
        cout << gcd << " " << lcm;
        cout << endl;
	}
}
	    