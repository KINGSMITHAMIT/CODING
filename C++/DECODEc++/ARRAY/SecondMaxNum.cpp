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
// IDEA(1) - find the largest first, then traverse again to find the largest but this time it shouldn't be the largest.  
// int maxm = arr[0];
int maxm = INT_MIN; 
int secmaxm = INT_MIN;
for(int i=0;i<size;i++){
    if (arr[i]>maxm)
    maxm = arr[i];
    else 
    continue;
}
for(int i=0;i<size;i++){
    if (arr[i]>secmaxm && arr[i] != maxm)
    secmaxm = arr[i];
    else 
    continue;
}
cout<<"The maximum num is "<<maxm<<endl;
cout<<"The second maximum num is "<<secmaxm<<endl;
return 0;
}
