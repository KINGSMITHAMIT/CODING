#include<bits/stdc++.h>
using namespace std;
// int factorial(int x){
//     int f;
//     if (x == 0 || x == 1){
//         f = 1;
//         return f;
//         }
//         f = x*factorial(x-1);
//         return f;
// }
int fact(int x){
    int f=1;
    for(int i = 2; i <=x; i++){
        f*=i;
    }
    return f;
    
}
// int combination(int n, int r){
//     int x = fact(n)/(fact(r)*fact(n-r));
//     return x;
//     }
int main(){
cout<<"Radhe_Radhe"<<endl;
int a, b;
cout<<"Enter your n and r variables"<<endl;
cin>>a>>b;
int nfact = fact(a);
int rfact = fact(b);
int abfact = fact(a-b);
int ncr = nfact/(rfact*abfact);
cout<<ncr;
return 0;
}