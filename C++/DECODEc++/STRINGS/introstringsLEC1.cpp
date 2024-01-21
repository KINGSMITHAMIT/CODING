/*A STRING IS SOMETHING WHICH IS IN BETWEEN THE TWO DOUBLE QUOTATIONS.
IT IS AN ARRAY OF CAHRACTERS*/
#include<bits/std c++.h>
using namespace std;
    void print(char arr[], int n){
for (int i = 0; i < n;i++){
    cout<<arr[i];
}
    }
    
int main(){
    char arr[] = {'R','a','d','h','e',' ','R','a','d','h','e'};
    int n = sizeof(arr)/ sizeof(arr[0]);
    print(arr, n);
return 0;   
}
