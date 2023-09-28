// # PASS BY REFERENCE ( USING ALIAS ) {CHEAP ONE}
#include<bits/stdc++.h>
using namespace std;
void swap(int &a, int &b){ // we passed the address of the numbers
    int temp = a;
    a = b;
    b = temp;
    return;
}
int main(){
cout<<"Radhe_Radhe"<<endl;
int m, n;
cout<<"Please enter two numbers for swapping"<<endl;
cin>>m>>n;
swap(m, n); 
cout<<m<<" "<<n<<endl;
return 0;
}