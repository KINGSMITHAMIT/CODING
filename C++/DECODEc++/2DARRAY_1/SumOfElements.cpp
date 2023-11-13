#include<bits/stdc++.h>
using namespace std;
int main(){
int m, n;
cout<<"Enter the num. of rows ";
cin>>m;
cout<<"Enter the num. of columns ";
cin>>n;
int arr[m][n];
for(int i=0; i<m; i++){
    for(int j=0; j<n; j++){
        cin>>arr[i][j];
    }
}
int sum = 0; // to store the sum of all the elemets
for(int i=0; i<m; i++){
    for(int j=0; j<n; j++){
        sum += arr[i][j];
    }
}
cout<<sum<<endl;

return 0;
}