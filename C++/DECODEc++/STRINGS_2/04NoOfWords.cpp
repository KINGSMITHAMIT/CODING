#include<bits/stdc++.h>
using namespace std;
int main(){
string s = "Radhe   ra   ra dd   ";
cout<<s<<endl;
int space = 0;
for(int i =0; i< s.length(); i++){
    
    if(s[i]==' '){
        //make sur u don't miss out on \0 and the the logical operator u must use
        if(s[i+1] != ' '  && s[i+1] != '\0')
        space++;
        else continue;
    }
    cout<<space;

}
cout<<endl<<space+1;
return 0;
}