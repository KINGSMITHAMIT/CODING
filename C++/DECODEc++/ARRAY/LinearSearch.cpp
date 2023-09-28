#include<bits/stdc++.h>
using namespace std;
int main(){
int size;
cout<<"Enter the size of the array"<<endl;
cin>>size;
int arr[size];
for(int i=0;i<size;i++){
    cout<<"Enter the number to store in the array ";
    cin>>arr[i]; 
    cout<<endl;
}
int n;
cout<<"Enter the num you want to find in the array ";
cin>>n;
cout<<endl;
int check=0;  // A checkmark was declared
for(int i=0;i<size;i++){
    if(arr[i]==n)
        check++;
    else
        continue;    
}
if(check>0)
cout<<"Found"<<endl;
else
cout<<" 404 element Not Found"<<endl;
return 0;
}
