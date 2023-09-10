#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"Radhe_Radhe"<<endl;
    int n;
    cout<<"Enter the num. of rows you want to print in your Star Pyramid"<<endl;
    cin>>n;
    //My approach --> inverted space loop + half star loop flipped + normal small star loop
// for(int i=1; i<=n; i++) {
//     for(int j=1; j <=n-i; j++){
//         cout<<" ";
//     }
//     for(int k = 1; k <=i; k++) {
//         cout<<"*";
// }
//     for(int l = 1; l <i; l++) {
//         cout<<"*";
//     }
//     cout<<endl;
// }
//Sir's approach --> inverted space loop + whole star loop flipped
// for(int i=1; i<=n; i++) {
//     for(int j=1; j <=n-i; j++){ // The no. of spaces are n-i in each row
//         cout<<" ";
//     }
//     for(int k = 1; k <=2*i-1; k++) { // Good way
//         cout<<"*";
// }
//     cout<<endl;
// }
//Sir's Method
int nst = 1; // nst --> number of stars
int nsp = n-1;  // nsp --> number of spaces 
for(int i=1;i<=n;i++){
    //spaces
    for(int j=1;j<=nsp;j++) { 
        cout<<" ";
    }
    nsp--;
    for(int k=1;k<=nst;k++){
        cout<<"*";
    }
    nst+=2;
    cout<<endl;
}
return 0;
}