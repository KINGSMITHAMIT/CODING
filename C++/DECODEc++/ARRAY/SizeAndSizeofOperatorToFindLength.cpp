#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of spaces you need create in your array."<<endl;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
    cout<<"please enter the num in "<<i+1<<"th space: ";
    cin >> arr[i];
    cout<<endl;
    }
    int size = sizeof (arr) / sizeof (arr[0]);// or  int length = sizeof (arr) / 4 bcoz the size of int is 4.
    cout << size;
return 0;
}