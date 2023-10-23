/* The comment `//Leetcode-88` is indicating that the code is related to a problem on the LeetCode
platform, specifically problem number 88. */
//Leetcode-88
//YOU HAVE TO FILL THE ELEMENTS ITSELF IN THE SORTED ORDER
//NOT LIKE YOU FILLED THEM FIRST AND SORT THEM AFTERWARDS

#include<bits/stdc++.h>
using namespace std;
void display(int arr[], int n){
    for(int i =0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return;
}
int main(){
cout<<"Radhe_Radhe"<<endl;
    /* The code is declaring two arrays, `arr1` and `arr2`, and initializing them with values. */
    int arr1[] = {1, 4, 5, 6};
    int arr2[] = {2, 3, 6, 7, 11};
    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    int n2 = sizeof(arr2)/sizeof(arr2[0]);
    int arr[n1+n2];
    int n = sizeof(arr)/sizeof(int);
    cout<<n1<<endl;
    cout<<n2<<endl;
    cout<<n<<endl;
    display(arr1, n1);
    display(arr2, n2);
    int i = 0, j=0, k=0;
    while( i<n1 && j<n2){
        if(arr1[i]<=arr2[j]){
        arr[k] = arr1[i];
        k++;
        i++;
        }
        else{
        arr[k] = arr2[j];
        k++;
        j+
        }
    }
    while(i<n1){
        arr[k] = arr1[i];
        k++;
        i++;
    }
    while(j<n2){
        arr[k] = arr2[j];
        k++;
        j++;
    }
    display(arr, n);

return 0;
}