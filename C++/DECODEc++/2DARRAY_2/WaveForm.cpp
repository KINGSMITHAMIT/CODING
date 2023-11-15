//printing the matrix in wave form
/*
1 2 3       1 2 3
4 5 6       6 5 4
7 8 9       7 8 9
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
int m, n;
cout<<"Enter the no. of rows & columns in the matrix"<<endl;
cin>>m>>n;
int a[m][n];
cout<<"Enter the elements into the array"<<endl;
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        cin>>a[i][j];
    }
}
cout<<endl;
//printing
for(int i=0; i<m; i++){
    for(int j= 0;j<n;j++){
        cout<<a[i][j]<<" ";
    }
    cout<<endl;
}   
cout<<endl;
//printing the matrix in wave form
for(int i=0;i<m;i++){
    if(i%2==0){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
    }
    else{
        for(int j=n-1;j>=0;j--){
            cout<<a[i][j]<<" ";
        }
    }
    cout<<endl;
}
return 0;
}