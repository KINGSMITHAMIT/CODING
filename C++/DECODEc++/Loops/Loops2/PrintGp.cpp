#include<bits/stdc++.h>
using namespace std;
int main(){
cout<<"Radhe_Radhe"<<endl;
int n;
cout<<"Enter the n num till which you want to print your GP"<<endl;
cin >> n;
int x= 1;
for(int i =1; i<=n;i++)
{
    cout<< x << endl;
    x *= 2;
}

return 0;
}