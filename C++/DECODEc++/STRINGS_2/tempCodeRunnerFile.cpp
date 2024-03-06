#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin, s);
    int maxcount = 1;
    char max_c = s[0];
        for(int i = 0; i<s.length(); i++){
        int count = 1;
        for(int j =i+1; j<s.length(); j++){
            if(s[i] == s[j] )
                count++;  
        }
        if(maxcount<count)  maxcount = count;
        }
        for(int i = 0; i<s.length(); i++){
        int count = 1;
        for(int j =i+1; j<s.length(); j++){
            if(s[i] == s[j] )
                count++;  
        }
        if(maxcount == count)
        cout<<"the max frequency char : "<<max_c<< " frequency : "<< maxcount<<endl;
        else continue;
        }

    return 0;
}