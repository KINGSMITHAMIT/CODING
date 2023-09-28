#include<bits/stdc++.h>
using namespace std;
int main(){
cout<<"Radhe_Radhe"<<endl;
vector<int> arr;
arr.push_back(1);
    cout<<"The vector array element is "<<arr[0]<<endl;
cout<<"size: "<<arr.size()<<endl;
cout<<"capacity: "<<arr.capacity()<<endl;
arr.push_back(2); // as soon as the size increases and becomes more than the capacity the control increases the capacity of the vector array
    cout<<"The vector array element is "<<arr[1]<<endl;
cout<<"size: "<<arr.size()<<endl;
cout<<"capacity: "<<arr.capacity()<<endl;
arr.push_back(3);
    cout<<"The vector array element is "<<arr[2]<<endl;
cout<<"size: "<<arr.size()<<endl;
cout<<"capacity: "<<arr.capacity()<<endl;
arr.push_back(4);
    cout<<"The vector array element is "<<arr[3]<<endl;
cout<<"size: "<<arr.size()<<endl;
cout<<"capacity: "<<arr.capacity()<<endl;
arr.push_back(5);
    cout<<"The vector array element is "<<arr[4]<<endl;
cout<<"size: "<<arr.size()<<endl;
cout<<"capacity: "<<arr.capacity()<<endl;
    //to erase the last element stored in the array we use pop_back()
arr.pop_back();
cout<<"size: "<<arr.size()<<endl;
cout<<"capacity: "<<arr.capacity()<  <endl;
for(int i = 0; i < (arr.size());   i++){
    cout<<"The vector array element "<<i<<" is "<<arr[i]  <<" ";
    cout<  <endl;
}


return 0;

}