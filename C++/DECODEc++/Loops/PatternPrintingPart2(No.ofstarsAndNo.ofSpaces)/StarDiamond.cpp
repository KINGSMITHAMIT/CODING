#include<bits/stdc++.h>
using namespace std;
int main(){
cout<<"Radhe_Radhe"<<endl;
int n;
cout<<"Enter a number for your star diamond"<<endl;
cin>>n;
// My logic here was to take 6 loops two for printing the spaces and 4 for printing the stars.
// But it didn't go that well. So It Requires an update because it's not sufficient to print the desired output. 
// for(int i = 1; i<=n; i++){
//     for(int j = i; j<=n-1; j++){
//         cout<<" ";
//     }
//     for(int k = 1; k<=i; k++){
//         cout<<"*";
//     }
//     for(int k = 1; k<=i-1; k++){
//         cout<<"*";
//     }
//     for(int l = 1; l<=i-1; l++){
//         cout<<" ";
//     }
//     for(int m = n-i; m>=1; m--){
//         cout<<"*";
//     }
// So now Sir's logic
//     cout<<endl;
// }
int nst = 1; // nst --> number of stars
int nsp = n-1;  // nsp --> number of spaces 
for(int i=1;i<=2*n-1;i++){
    //spaces
    for(int j=1;j<=nsp;j++) { 
        cout<<" ";
    }
    if(i<=n-1)nsp--;
    else nsp++;
    for(int k=1;k<=nst;k++){
        cout<<"*";
    }
    if(i<=n-1) nst+=2;
    else nst-=2;
    cout<<endl;
}

return 0;
}