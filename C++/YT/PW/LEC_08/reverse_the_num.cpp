#include<bits/stdc++.h>
using namespace std;
int main(){
//cout<<"Radhe_Radhe";
int n;
int digit;
int revdigit=0;
cin >> n;
while(n>0){
digit = n%10;
revdigit = (revdigit*10)+digit;
n /= 10;
}
cout<< revdigit<< endl;
return 0;
}