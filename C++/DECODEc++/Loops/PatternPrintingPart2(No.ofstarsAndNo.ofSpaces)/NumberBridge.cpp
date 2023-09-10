// OUTPUT -->
// Radhe_Radhe
// Enter a num (less than 5) for your number bridge
// 5
// 123456789
// 1234 6789
// 123   789
// 12     89
// 1       9
#include<bits/stdc++.h>
using namespace std;
int main(){
cout<<"Radhe_Radhe"<<endl;
int n;
cout<<"Enter a num (less than 5) for your number bridge "<<endl;
cin>>n;
// for(int i=1; i<=2*n-1; i++){
//     cout<<i;
// }
// cout<<endl;
int nsp = 1; 
// for(int i=1; i<=n-1; i++){
//     for(int j=1; j<=n-i; j++){
//         cout<<j;
// }
// for(int k =1; k<=nsp; k++){
//     cout<<" ";
// }
// nsp += 2;
//     for(int j=1; j<=n-i; j++){
//         cout<<j+n+i-1;
// }
//     cout<<endl;
// }
// sir's Method
for(int i=1; i<=2*n-1; i++){
    cout<<i;
}
cout<<endl;
 // an extra variable was introduced which  we will be printing
for(int i=1; i<=n-1; i++){
    int a =1;
    for(int j=1; j<=n-i; j++){
        cout<<a;
        a++;
}
for(int k =1; k<=nsp; k++){
    cout<<" ";
    a++;
}
nsp += 2;
    for(int j=1; j<=n-i; j++){
        cout<<a;
        a++;
}
    cout<<endl;
}
return 0;
}