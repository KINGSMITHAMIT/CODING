#include<bits/stdc++.h>
using namespace std;
int main(){
cout << "RADHE_RADHE" << endl;
int n;
cout<<"Enter the n num till which you want print your AP"<<endl;
cin >> n;
//METHOD--1
// a=1; d = 2; n = __; 
// a(n)= a -(n-1)d; --> a(n) = 2n-1
for(int i=1; i<=(2*n-1); i+=2){
    cout<< i <<endl;
}
//METHOD--2 [better]
int x=1;
for (int i=1; i<=n; i++){
    cout<< x <<endl;
    x += 2;
}
return 0;
}