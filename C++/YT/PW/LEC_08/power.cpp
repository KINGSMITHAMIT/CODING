#include<bits/stdc++.h>
using namespace std;
int main(){
//cout<<"RADHE_RADHE";
int a;
int b;
cin>> a>> b;
int power = 1;
for(int i = 1;i <= b; i++) 
{
     power *= a;
}
cout<<power<<endl;
return 0;
}