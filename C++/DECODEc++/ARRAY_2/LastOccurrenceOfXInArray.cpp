#include<bits/stdc++.h>
using namespace std;
int main(){
cout<<"Radhe_Radhe"<<endl;
vector<int> v;
v.push_back(1);
v.push_back(7);
int x;
v.pop_back();
v.pop_back();
for(int i=0; i<9; i++){
    cin>>x;
    v.push_back(x);
}
for(int i=0; i<9; i++){
    cout<<v[i]<<" ";
}
cout<<endl;

int index = -1;
int num;
cout<<"Entr your num "<<endl;
cin>>num;
for(int i=0; i<v.size(); i++){
    if (num == v[i]){
            index=i;
}
}
cout<<" index = "<<index<<endl;

for(int i=(v.size()-1); i>=0; i--){ 
    // for saving run time we will pass the array from the end
    if (num == v[i]){
            index=i;
            break;
}
}
cout<<" index = "<<index<<endl;
return 0;
}