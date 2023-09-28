#include<bits/stdc++.h>
using namespace std;
int hcf =1;
int gcd(int x, int y){
        for(int i = 1; i <= min(x,y); i++)
    if(x%i==0 && y%i==0){
        hcf = i;
    }
    // cout<<hcf<<endl;
    return hcf;
}
int gcd_optimised(int x, int y){
    for(int i = min(x,y); i >= 1; i--)
    if(x%i==0 && y%i==0){
        hcf = i;
        break;
    }
    // cout<<hcf<<endl;
    return hcf;
}
int gcd_double_optimised(int x, int y){ //will be tought in recursion
    int minm = min(x,y);
    int maxm = max(x,y);
    int v = 1;

        while(v!=0){
        v = maxm % minm;
    if (v!=0){
        maxm = minm;
        minm  = v;
    }
    else{
        hcf = minm;
    }
        }
    return hcf;
}
int main(){
cout<<"Radhe_Radhe"<<endl;
int a, b;
cout<<"Please enter your desired numbers for which you would like to find Greatest Common Divisior "<<endl;
cin>>a>>b;
cout<<"The hcf of "<<a<<" and "<<b<<" is "<<gcd(a,b)<<endl;
cout<<"The hcf of "<<a<<" and "<<b<<" in a optimised way is "<<gcd_optimised(a,b)<<endl;
cout<<"The hcf of "<<a<<" and "<<b<<" in a more optimised way is "<<gcd_double_optimised(a,b)<<endl;
return 0;
}