#include<bits/stdc++.h>
using namespace std;
int main(){
cout<<"Radhe_Radhe"<<endl;
vector<int> arr(4, 2912);
for(int i = 0; i < (arr.size()); i++){
    cout<<"The vector array element "<<i<<" is "<<arr[i]<<" ";
    cout<<endl;
}
cout<<endl;
// Reinitialization of vector elements
// Here the initialiation of array can give error if the size wouldn't have been assigned earlier.
for(int i = 0; i < (arr.size()); i++){
    cout<<"Enter the vector element in "<< i+1 <<"th cell: ";
    cin>>arr[i];
    cout<<endl;
}
for(int i = 0; i < (arr.size()); i++){
    cout<<"The vector array element "<<i+1<<" is "<<arr[i]<<" ";
    cout<<endl;
}
cout<<endl<<"Thank_You! :)"<<endl;
return 0;
}