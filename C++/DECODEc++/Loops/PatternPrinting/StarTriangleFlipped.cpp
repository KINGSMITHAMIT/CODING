#include<bits/stdc++.h>
using namespace std;
int main(){
cout << "Radhe_Radhe"<<endl;
int n ;
cout<<"Enter the num of rows for which you want to print your Flipped Star Triangle"<<endl;
cin >> n;
// My_logic
// int a = n; // Taking an extra variable for printing at the desired location
// for(int i=1; i<=n; i++){
//     for(int j=1; j<=n; j++){
//         if (j>=a)
//         cout<<"*";
//         else 
//         cout<<" ";
//     }
//     a -= 1;
//     cout<<endl;
// }
//Sir's method
// two loops within a loop
    for(int i=1; i<=n; i++){
        for (int j=1; j<=n-i; j++){  // We are takig the condition from n+1-i which was for printing the inverted triangle but we are subtracting a 1 to avoid the print of an extra space.
            //For printing spaces,
            cout<<" ";
    }
        for(int k=1; k<=i; k++){ //For printing stars
            cout<<"*";
    }
    cout<<endl;
    }
    
return 0;
}   