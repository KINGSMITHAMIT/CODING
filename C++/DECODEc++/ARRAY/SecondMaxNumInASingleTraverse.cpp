#include<bits/stdc++.h>
using namespace std;
// void max(int a, int b, int* arr){ // pass by reference for the array
//     unsigned int n = (sizeof(arr)/4);
//     cout<<n<<endl;
//     for(int i = 0; i < n; i++){
//         if(a<arr[i]){
//             b = a;
//             a = arr[i];
//         }
//     }
//     cout<<"the maximum value in the array is "<<a<<endl;
//     cout<<"the second maximum value in the array is "<<b<<endl;
//     return;
// }
int main(){
cout<<"RADHE_RADHE"<<endl;
int n;
cout<<"Enter the num of values you would like to store in your array: ";
cin>>n;
cout<<endl;
int arr[n];
for(int i=0; i< n; i++){
    cout<<"Please enter the value you would like to store in the "<<i<<"th index of your array ";
    cin>>arr[i];
    cout<<endl;
}
int max1, max2; 
max1 = max2 = INT_MIN;
// max(max1, max2, arr);
int size = (sizeof(arr)/4);
    cout<<size<<endl;
    for(int i = 0; i < size; i++){
        if(max1<arr[i]){
            max2 = max1;
            max1 = arr[i];
        }
        else if(max2<arr[i] && arr[i] !=max1){
            max2 = arr[i];
    }
    }
    cout<<"the maximum value in the array is "<<max1<<endl;
    cout<<"the second maximum value in the array is "<<max2<<endl;
return 0;
}