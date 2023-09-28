#include<bits/stdc++.h>
using namespace std;
int main(){
int arr[] = {1,2,3,4,5,6,7};
int* ptr = arr;
int size = sizeof(arr)/sizeof(arr[5]);
for(int i = 0; i<size; i++){
    cout<<*ptr<<" ";
    ptr++;
}
cout<<endl;
ptr = arr;
for(int i = 0; i<size; i++){
    cout<<ptr[i]<<" ";
}
cout<<endl;
ptr = arr;
for(int i = 0; i<size; i++){
    cout<<i[ptr]<<" ";
}
cout<<endl;
ptr = arr; // its a good practice to reinitialize the array's first index to the pointer as it has been stored with an out of the address. 
return 0;
}