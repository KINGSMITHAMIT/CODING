#include<bits/stdc++.h>
using namespace std;
int main(){
cout << "Radhe_Radhe";

int n; 
cout << "Enter the num.of rows till where you want to print your Flipped Number Triangle" << endl;
cin>>n;
// Sir's Method 1
    // for(int i = 1; i <=n; i++){
    //     int a = 1;
    //     for(int j = 1; j <=n-i; j++){
    //         cout<<" ";
    //     }
    //     for(int k = 1; k<=i; k++){
    //         cout<<k;
    //         }
    //     cout<<endl;
    // }
    // Sir's Method 2
    // Square model
    for (int i = 1; i <= n; i++){
        int a = 1;
        for (int j = 1; j <= n; j++){
            if(i+j>=n+1){
            cout<<a;
            a+=1;
            }
            else 
            cout<<" ";
    }
    cout<<endl;
    }
return 0;
}