// WE are printing stars where i == j,
// and i+j=n+1
#include<bits/stdc++.h>
using namespace std;
int main(){
cout<<"Radhe_Radhe"<<endl;
int n;
cout<<"Enter only a odd no. for your the pattern "<<endl;
cin>>n;
int a = n; 
    for(int i =1; i<=n; i++){
        for(int j =1; j<=n; j++){
            // My_Logic
            // if (j == i||j == a){ //where we want to print our stars
            //     cout<<"*";
            //     if (j ==a) {
            //         a-=1;        
            //     }
            // }
            // Sir's_Logic
                if (j == i||j+i == n+1){ //where we want to print our stars
                cout<<"*";
                }
            else 
            cout<<" ";     // we need to print the spaces too
    }

    cout<<endl;
    }
return 0;
}