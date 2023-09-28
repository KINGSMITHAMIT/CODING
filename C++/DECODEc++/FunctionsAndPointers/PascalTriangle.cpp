//use of combination heavily
//time complexity of the program is very high
#include<bits/stdc++.h>
using namespace std;
int fact(int x){
    int f=1;
    for(int i = 2; i <=x; i++){
        f*=i;
    }
    return f;
}
int comb(int n, int r){
    int x = fact(n)/(fact(r)*fact(n-r));
    return x;
    }

int main(){
cout<<"Radhe_Radhe"<<endl;
int n;
cout<<"Enter the row no. till which you would like to print your pascal triangle"<<endl;
cin>>n;
int a =n;
for(int i=0; i<n; i++){
    for(int k=a; k>0; k--){
        cout<<" ";
    }
    a -= 1;
    for(int j=0; j<=i; j++){
        cout<<comb(i,j)<<" ";
    }
    cout<<endl;
}
return 0;
}