#include<bits/stdc++.h>
using namespace std;
int main(){
int m, n;
cout<<"Enterr the num. of rows ";
cin>>m;
cout<<"Enterr the num. of columns ";
cin>>n;
int arr[m][n];
for(int i=0; i<m; i++){
    for(int j=0; j<n; j++){
        cin>>arr[i][j];
    }
}
int min = arr[0][0];
for(int i=0; i<m; i++){
    for(int j=0; j<n; j++){
        if(arr[i][j]<=min) min=arr[i][j];
    }
}
cout<<min<<endl;
return 0;
}