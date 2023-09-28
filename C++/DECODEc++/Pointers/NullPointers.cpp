#include<bits/stdc++.h>
using namespace std;
int main(){
    int n = 9;
    int* ptr1 = NULL;
    int *ptr2 = nullptr;
        cout<<"The value of null pointer initialized in ptr1 i.e. NULL "<<ptr1<<endl;
        cout<<"The value of null pointer initialized in ptr2 i.e. nullptr "<<ptr2<<endl;
    int * ptr5 = 0;
        cout<<"The address of ptr 5 is "<<ptr5<<endl;
    int * ptr6 = '\0'; // \0 --> null Character
        cout<<"The address of ptr 6 is "<<ptr6<<endl;
    ptr1 = &n;
    int** ptr3 = &ptr1;
    int***ptr4 = &ptr3;
        cout<<"The address of ptr 3 is "<<ptr4<<"The Value at ptr 1 is "<<***ptr4 <<endl;
return 0;
}