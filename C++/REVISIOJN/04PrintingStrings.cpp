#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
    char s[] = {'R','a','d','h','e'};
    // cout<<s<<endl;
    // strings can be printed using foor loop
    int size = sizeof(s)/sizeof(s[0]);
    for(int i =0; i< size; i++){
        cout<<s[i]<<endl;
    } 
    return 0;
}