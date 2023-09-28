#include<bits/stdc++.h>
using namespace std;
// int factorial(int x){
//     int f;
//     if (x <= 1){
//         f = 1;
//         return f;
//         }
//      f = x*factorial(x-1);
//         return f;
// }
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
int permut(int n, int r){
    int y = fact(n)/(fact(n-r));
    return y;
}
int main(){
cout<<"Radhe_Radhe"<<endl;
int a, b;
cout<<"Enter your n and r variables"<<endl;
cin>>a>>b;
int nfact = fact(a);
int rfact = fact(b);
int abfact = fact(a-b);
int npr = permut(a, b);
cout<<"The value of permutation is: "<<npr<<endl;
int ncr = comb(a, b);
cout<<"The value of combination is: "<<ncr<<endl;

return 0;
}
