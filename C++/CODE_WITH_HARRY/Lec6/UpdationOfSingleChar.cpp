#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"Radhe_Radhe"<<endl;
    string s;
    getline(cin, s);
    for(int i =0; s[i] != '\0'; i++){
        if(s[i] % 2 == 0){
            s[i] = '#';
        }
    }
    cout<<s<<endl;
return 0;
}