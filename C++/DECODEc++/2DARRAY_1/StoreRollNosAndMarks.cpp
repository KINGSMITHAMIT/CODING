// no of marks obtained by 4 student 
// marks how many -- can be of one subject or more
// no. of students(roll no.) -- 4;
#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"Radhe Radhe"<<endl;
// int m,n;
// cout<<"Enter the number of rows"<<endl;
// cin>>m; //
// cout<<"Enter the number of columns"<<endl;
// cin>>n; //
int arr[2][4];
for(int i =0; i<2; i++){
    for(int j= 0; j<4;j++){
        cin>>arr[i][j];
    }
}
for(int i =0; i<2; i++){
    for(int j= 0; j<4;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}
return 0;
}