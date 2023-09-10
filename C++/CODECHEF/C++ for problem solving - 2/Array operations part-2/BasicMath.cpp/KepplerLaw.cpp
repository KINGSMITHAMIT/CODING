// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// int t1, t2, r1, r2; double ans;
//     cout<<"RADHE_RADHE"<<endl;
// 	cin>> t1 >> t2 >> r1 >> r2;

// 	ans= (pow(t1,2)/pow(r1,3))==(pow(t2,2)/pow(r2,3));
//     cout<<ans<<endl;
// return 0;
// }
// Solution as follows

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    cout<<"RADHE_RADHE"<<endl;
	int t;
    cin >> t;
	
	while(t--)
	{
	    int t1, t2, r1, r2;
	    cin >> t1 >> t2 >> r1 >> r2;
	    //proportionality constants for planet 1 and planet 2
	    // we are expecting decimal vaues for planet1 & planet2, thus declared as double
	    double planet1 = pow(t1,2)/pow(r1,3);   
        double planet2 = pow(t2,2)/pow(r2,3);
        
        if (planet1 == planet2)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
	}
}	