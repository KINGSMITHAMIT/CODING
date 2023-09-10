#include<bits/stdc++.h>
using namespace std;
int main(){
cout<<"Radhe_Radhe"<<endl;
int n;
cout<<"Enter the num. of rows till were you want to print your Binary Triangle"<<endl;
cin>>n;
int a;
    // for(int i=0; i<n; i++){ 
    //     if(i%2==0) a = 1; // for row no. even
    //     else  a = 0; // for row no. odd
    //     for(int j=0; j<=i; j++){
    //         cout << a;
    //         .// flipping
    //         if (a==1) a = 0;
    //         else a = 1;
    //     }
    //     cout<<endl;
    // }
    // Logical way
    // if our row no. and column no. both are odd or both are even then print 1
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            if((i%2  == 0 && j%2 == 0) || (i%2 != 0 && j%2 != 0))
            cout<< 1;
            else 
            cout<< 0;
        } 
        cout<< endl;    
    }
return 0;
}