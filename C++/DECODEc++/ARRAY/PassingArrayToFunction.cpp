#include<bits/stdc++.h>
using namespace std;
int display( int arr[], int size){ // or int display( int a[], int size)
    for(int i=0; i<size; i++){ // or for(int i=0; i<=size-1; i++)
        cout << arr[i]<<" ";
    }
    cout << endl;
}
int change( int* arr, int size){ //int display( int b, int size)
    arr[0] = 8;
}
int main(){
cout<<"RADHE_RADHE"<<endl;
cout<<"This program has been written to show the passing of array to a function so no variable have been taken from the keyboard / user "<<endl;
int arr[] = {0,1,2,3,4,5,6,};
int size = sizeof(arr)/sizeof(arr[0]);
display(arr, size); // we generally pass a array to a function it is generally recommended to also send the size calculated in the 
change(arr, size);
display(arr, size);
return 0;
}