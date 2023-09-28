#include<bits/stdc++.h>
using namespace std;
int main(){
    cout << "Radhe_Radhe" << endl;
    int a = 5;    
    int* ptr1 = &a;
    cout<<sizeof(int) << endl;
          //(*ptr1)++;  
        cout<<*ptr1<<endl;
        cout<<ptr1<<endl; //0x61ff08
        ptr1 = ptr1 + 1;
        cout<<ptr1<<endl; //0x61ff0c
    bool b = 7;
    bool* ptr2 = &b;
    cout<<sizeof(double) << endl;
        cout<<*ptr2<<endl;
        cout<<ptr2<<endl;
        ptr2 = ptr2 + 1;
        cout<<ptr2<<endl;
    char c = 'K';
    char* ptr3 = &c;
    cout<<sizeof(char) << endl;
        cout<<*ptr3<<endl;
        cout<<ptr3<<endl;
        ptr3 = ptr3 + 1;
        cout<<ptr3<<endl;
    double d = 9.7;
    double* ptr4 = &d;
    cout<<sizeof(double) << endl;
        cout<<*ptr4<<endl;
        cout<<ptr4<<endl;
        ptr4 = ptr4 + 1;
        cout<<ptr4<<endl;

return 0;
}