#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cout<<"Radhe_Radhe"<<endl;
    getline(cin,s);
    int c = s.size();
    c = s.length();
    reverse(s.begin(), s.begin()+c/2);
    cout<<s<<endl;  
return 0;
}