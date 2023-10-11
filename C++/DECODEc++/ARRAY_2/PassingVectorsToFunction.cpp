#include<bits/stdc++.h>
using namespace std;
void change(vector<int>&a){ //if we pass the vector by value then it creates a new vector 
// but if we try to pass it by reference then we can usethe &(ampercent operator)
//but this won't happen (or we can as usual mention the same vector name while passing by value) :(  
a[3]=44; 
}
void call(vector<int>&v){
        v[2]=58;
}
int main(){
vector<int>v;
v.push_back(4);
v.push_back(3);
v.push_back(8);
v.push_back(9);
for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";
}
cout<<endl;
change(v);
call(v);
for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";
}
cout<< endl;
return 0;
}