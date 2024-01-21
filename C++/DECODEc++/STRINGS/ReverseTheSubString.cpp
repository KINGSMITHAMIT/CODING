//Q. Input a string of length greater than 5 and reverse the substring from position 2 to 5 using inbuilt functions
#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"Radhe_Radhe"<<endl;
    string s;
    getline(cin, s);
    int len = s.length();
    cout<<len<<endl;
    reverse(s.begin()+2, s.begin()+6);
    cout<<s<<endl;

return 0;
}