#include<bits/stdc++.h>
using namespace std;
int main(){
int m, n;
cout<<"enter the no.of rows : ";
cin>>m;
cout<<"enter the no.of columns : ";
cin>>n;
int arr [m][n];
//input
for(int i=0; i<m; i++){
    for(int j= 0;j<n;j++){
        cin>>arr[i][j];
    }
}
cout<<endl;
//printing
for(int i=0; i<m; i++){
    for(int j= 0;j<n;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}   
cout<<endl;

//printing transpose
for(int j=0; j<n; j++){
    for(int i=0; i<m; i++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}
return 0;
}