#include<bits/stdc++.h>
using namespace std;
int main(){
//cout<<"RADHE_RADHE";
int n;
cin>> n;
int sum =0;
for(int i =1; i<=n; i++ ){
if(i%2!=0){
sum += i;
}
else if(i%2==0){
    sum -= i;
}
}
cout<<sum<<endl;
return 0;
}