#include<bits/stdc++.h>
using namespace std;
int main(){
cout<<"Radhe Radhe"<<endl;
string str;
cout<<"enter the string\n";
getline(cin, str);
int len = str.length();
int c =0;
for(int i = 1; i<len-1; i++ ){

if(str[i] != str[i+1] && str[i] != str[i-1]){
    c++;
}
else continue;

}
cout<<c;
return 0;
}