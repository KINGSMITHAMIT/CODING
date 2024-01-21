#include<bits/stdc++.h>
using namespace std;
int main(){
string s = "Radhe Radhe";
int count = 0;
int i = 0;
while( s[i] != '\0'){
    if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' ||s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' ||s[i] == 'O' || s[i] == 'U'){
        count++;
    }
    i++;
}
cout<<count;
return 0;
}