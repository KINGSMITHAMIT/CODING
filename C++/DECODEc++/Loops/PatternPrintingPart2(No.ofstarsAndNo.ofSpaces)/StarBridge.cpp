#include<bits/stdc++.h>
using namespace std;
int main(){
cout<<"Radhe_Radhe"<<endl;
int n;
cout<<"enter a num to print your Star Bridge"<<endl;
cin>>n;
//My thought here was to print a reactangle with stars and then to replace the stars in the mid with a pyramid of spaces
// for(int i = 1; i <= n; i++){
//     for(int j = 1; j <= 2*n-1; j++){
//         cout<<"*";
//     }
//     cout<<endl;
// }
// cout<<endl;
    for(int i = 1; i <= 2*n-1; i++) 
        cout<<"*";
        cout<<endl;
// Sir's logic here was to print the first row separately while printing the other portion differently.        
//print the half inverted triangle first +
// a space pyramid +
// a another inverted triangle
            int nsp = 1;
for(int i = 1; i <= n-1; i++){
    for(int j = 1; j <= n-i; j++){
        cout<<"*";
    }
    for(int k = 1; k <= nsp; k++){ 
        cout<<" ";
    }
    nsp += 2;
    for(int j = 1; j <= n-i; j++){
        cout<<"*";
    }
    cout<<endl;
}

return 0;
}