#include<bits/stdc++.h>
using namespace std;
int main(){
cout<<"Radhe_Radhe"<<endl;
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

int t[n][m]; // transpose matrix

// store the values
for(int i = 0; i<n; i++){
    for(int j=0; j<m; j++){ 
        t[i][j] = arr[j][i];
    }
}

//printing transpose
for(int i=0; i<n; i++){
    for(int j= 0;j<m;j++){
        cout<<t[i][j]<<" ";
    }
    cout<<endl;
}   
return 0;
}