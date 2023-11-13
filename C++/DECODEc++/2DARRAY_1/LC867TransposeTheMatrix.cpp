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
int temp = 0; // for swapping
for(int i=0;i<m; i++){
    for(int j=i+1; j<n; j++){
        if(i==j) continue;
        else if (i!=j){ 
            temp = arr[i][j];
            arr[i][j]= arr[j][i];
            arr[j][i]= temp;
        }
    }
}
//printing transpose
for(int i=0; i<m; i++){
    for(int j= 0;j<n;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}   
cout<<endl;
return 0;

}