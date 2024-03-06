#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"Radhe Radhe"<<endl<<"enter the string"<<endl;
    string str;
    getline(cin, str);
    reverse(str.begin(), str.end()-str.length/2);
    cout<<str;
}
