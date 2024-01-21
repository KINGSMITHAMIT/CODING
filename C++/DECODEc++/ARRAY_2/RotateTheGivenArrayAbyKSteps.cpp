#include<bits/stdc++.h>
using namespace std;
void display(int arr[], int n){ 
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return;
}
void rev_display(int arr[], int n){ 
for(int i=0; i<n; i++){
    cout<<arr[(n-1)-i]<<" ";
    }
    cout<<endl;
    return; 
}
void rotate(int arr[], int n, int x){  // my logic
for(int i=1; i<=x; i++){
    int temp = arr[n-1];
    for(int j=n-1; j>0; j--){
        arr[j] = arr[(j-1)];
    }
    arr[0] = temp; 
}
return;
}
void reverse(int arr[], int m, int n){ // Sir's logic
    for(int i = m, j = n; i<=j; i++,j--){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
}
return;
}
int main(){
cout<<"Radhe_Radhe"<<endl;
int s; // for storing size
cout<<"Enter the size of your array"<<endl;
cin>>s;
int a[6]; 
cout<<"Enter the elements of your array"<<endl;
for(int i=0; i<s; i++){
    cin>>a[i];
}
cout<<"The array is: ";
display(a, s);
// rev_display(a, s);
int k; //for storing the no. of steps, the array is needed to be rotated
cout<<"enter your k: ";
cin>>k;
if(k>s){ // sir's k =k%s;
    while(k>s){
        k = k-s;
    }
}
// The below three line of codes unlock my logic of printing the rotated code
// rotate(a, s, k);
// cout<<"The array after rotation is: ";
// display(a, s);
// The below four lines of code I have written using Sir's logic
reverse(a, 0, ((s-1)-k));
reverse(a, (((s-1)-k)+1), (s-1)); // better(a, s-k, s-1)  
reverse(a, 0, (s-1));
display(a, s);
return 0;
}