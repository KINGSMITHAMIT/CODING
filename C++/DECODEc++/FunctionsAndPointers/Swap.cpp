#include<bits/stdc++.h>
using namespace std;
void swap(int x, int y){
    x = x + y;
    y = x - y; // do not mistake here to change the x value before changing the y
    x = x - y;
    cout << x << " "<< endl << y << endl;
    }
int main(){
int a, b;
cout<<"Input two parameters for swapping "<<endl;
cin>> a>>b;
swap(a,b);
return 0;
}