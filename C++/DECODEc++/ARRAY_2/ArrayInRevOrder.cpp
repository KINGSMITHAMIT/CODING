#include<bits/stdc++.h>
using namespace std;
void display(vector<int>&v){
    for(int i= 0; i<=v.size()-1; i++){
        cout<<v[i]<<" ";
    }
}
int main(){
    vector<int>v;
    int s;
    cout<<"Enter the size: ";
    cin>> s;
    for(int i=0; i<s; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    display(v);
    cout<<"\n";
    vector<int> v2(v.size());
    cout<<"\n";
    for(int i=0; i<v2.size(); i++){
        v2[i] = v[v.size()-1-i];
    }
    display(v2);
return 0;
}