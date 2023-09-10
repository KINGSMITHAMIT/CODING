#include<bits/stdc++.h>
using namespace std;
int main(){
cout<<"Radhe Radhe"<<endl;
int t;
cout<<"Enter the number of test cases to run"<<endl;
cin>>t;
while(t--){
    int n;
int flag = 0;
cout<<"Enter the number to check prime or composite"<<endl;
cin>>n;
for (int i=2; i<=n-1; i++){
    if (n%2==0){
        flag++;
        break;
    }
    else continue;
}
if(n==1) cout<<"1 is neither prime nor composite"<<endl;
else if (flag==0) cout<<"The num. is prime"<<endl;
else cout<<"The num. is composite"<<endl;
}
return 0;
cout<<"Thank You "<< endl;
}
