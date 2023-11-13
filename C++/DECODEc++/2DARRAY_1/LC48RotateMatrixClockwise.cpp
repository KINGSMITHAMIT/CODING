#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cout<<"Enter the num for a square matrix"<<endl;
cin>>n;
int a[n][n];
//taking input
for(int i=0; i<n; i++){
    for(int j = 0; j<n; j++){
        cin>>a[i][j];
    }
}
cout<<endl;
//printing the matrix
for(int i=0; i<n; i++){
    for(int j = 0; j<n; j++){
        cout<<a[i][j]<<" ";
    }
    cout<<endl;
}
cout<<endl;
int temp = 0; // for swapping
//transpose the matrix
for(int i=0; i<n; i++){
    for(int j = i; j < n; j++){
        temp = a[i][j];
        a[i][j] = a[j][i];
        a[j][i] = temp;
    }
}
//printing the matrix
for(int i=0; i<n; i++){
    for(int j = 0; j<n; j++){
        cout<<a[i][j]<<" ";
    }
    cout<<endl;
}
cout<<endl;
//rotating the array

for(int k = 0; k<n; k++){
for(int i=0, j = n-1; i<=j; i++, j--){
        temp = a[k][i];
        a[k][i] = a[k][j];
        a[k][j] = temp;
    }
}

//printing the matrix
for(int i=0; i<n; i++){
    for(int j = 0; j<n; j++){
        cout<<a[i][j]<<" ";
    }
    cout<<endl;
}
cout<<endl;
return 0;
}