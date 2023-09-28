#include<bits/stdc++.h>
using namespace std;
int main(){
cout<<"Radhe_Radhe"<<endl;
int n, m;
int*p = &n;
int*q = &m;
cout<<"Please enter your desired numbers to print the sum"<<endl;
// cin>>n>>m;
cin>>*p>>*q;
cout<<*p+*q;
return 0;
}