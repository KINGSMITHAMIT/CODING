#include<bits/stdc++.h>
using namespace std;
int main(){
int size;
cout<<"Enter the size of the array ";
cin>>size;
cout<<endl;
int arr[size];
for(int i=0;i<size;i++){
    cout<<"Enter the number to store in the array ";
    cin>>arr[i]; 
    cout<<endl;
}
// int maxm = arr[0];
int maxm = INT_MIN; 
for(int i=0;i<size;i++){
    if (arr[i]>maxm)
    maxm = arr[i];
    else 
    continue;
}
cout<<"The maxm num is "<<maxm<<endl;
return 0;
}
