//Q.Input the string of even length and return the second half of that string using inbuilt substtr function
#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"Radhe_Radhe"<<endl;
    string str;
    // getline(cin, str);
    str = "abcdefgh";
    int len = str.length();
    cout<<len<<endl;
    string str2;
    if(str.length()%2 ==0)
    {str2 = str.substr((len/2), (len-1));}
    else 
    {str2 = str.substr((len/2+1), (len-1));}
    cout<<str2<<endl;
    

    return 0;
}
