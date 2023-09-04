#include<bits/stdc++.h>
using namespace std;
int fibonacci(int n){
    if (n==1){
        return 1;
    }
    else if(n==0) return 0;
    return fibonacci(n-2) + fibonacci(n-1);
}
int main(){
int t;
cout<<"Enter the num. till where you want to print your fibonacci."<<endl;
cin>>t;
cout << fibonacci(t);
return 0;
}