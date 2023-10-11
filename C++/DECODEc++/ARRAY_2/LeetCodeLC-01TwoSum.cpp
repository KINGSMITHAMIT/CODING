#include<bits/stdc++.h>
using namespace std;
int main(){
cout<<"Radhe_Radhe"<<endl;
int x;
cout<<"Enter target value: ";
cin >> x;
vector<int>v;
int n;
cout<<"Enter the size of the vector";
cin>> n;
for(int i=0;i<n;i++){
    cout<<"Enter the vector element: ";
    int q;
    cin >>q;
    v.push_back(q);
    cout<<"\n";
}
int a,b;
for(int i=0;i<n-1;i++){
    a = v[i];
    for(int j= i+1;j<n;j++){
        if(a+v[j]==x){
            cout<<"the doublet was found: "<<v[i]<<"+"<<v[j]<<endl;
        }
    }
}
return 0;
}