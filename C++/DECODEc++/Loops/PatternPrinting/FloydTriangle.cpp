#include<bits/stdc++.h>
using namespace std;
int main(){
cout<<"Radhe_Radhe"<<endl;
int n;
cout<<"Enter the num. of rows till were you want to print the Floyd's Triangle"<<endl;
cin>>n;
int a = 1;
    for(int i=0; i<n; i++){
        for(int j=0; j<i; j++){
            cout<<a;
            a+=1;
            cout<<" ";
        }
        cout<<endl;
    }
return 0;
}