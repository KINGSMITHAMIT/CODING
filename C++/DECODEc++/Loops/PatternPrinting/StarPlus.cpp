#include<bits/stdc++.h>
using namespace std;
int main(){
cout<<"Radhe_Radhe"<<endl;
int n;
cout<<"Enter only a odd no. for your the pattern "<<endl;
cin>>n;
int mid = (n+1)/2; // here don't use % it will store 0 in mid.
    for(int i =1; i<=n; i++){
        for(int j =1; j<=n; j++){
            if (j == mid||i == mid){ // if the i condition was not mentioned then we woudn't have been able to print the stars horizontally
                cout<<"*";
            }
            else 
            cout<<" ";     
    }
    cout<<endl;
    }
return 0;
}