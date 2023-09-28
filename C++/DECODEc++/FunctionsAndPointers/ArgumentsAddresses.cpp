#include<bits/stdc++.h>
using namespace std;
void func(int x, int y){ //formal parameters
cout<<"The address of main x: "<<&x<<endl;
cout<<"The address of main y: "<<&y<<endl;
}
void funcab(int a, int b){ //formal parameters
cout<<"The address of main x: "<<&a<<endl;
cout<<"The address of main y: "<<&b<<endl;
}
int main(){
cout<<"Radhe_Radhe"<<endl;
int x, y; //actual parameters
// cout<<"Input a num in x"<<endl;
// cin >> x;
// cout<<"Input a num in y"<<endl;
// cin >> y;
func(x,y);
funcab(x,y);
cout<<"The address of main x: "<<&x<<endl;
cout<<"The address of main y: "<<&y<<endl;
int* a = &x;
int* b = &y;
cout<<"The address of main x: "<<a<<endl;
cout<<"The address of main y: "<<b<<endl;
return 0;
}