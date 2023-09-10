
#include<bits/stdc++.h>
using namespace std;
int main(){
cout<<"RADHE_RADHE"<<endl;
int t;
cout<<"Enter Num of Test Cases: "<<endl;
cin>>t;
while(t--){
    string s, t, m;
    cout<<"Enter the Hidden Word in ONLY CAPITAL LETTERS "<<endl;
    cin>>s;
    cout<<"Enter your Guessed Word in ONLY CAPITAL LETTERS "<<endl;
    cin>>t;
    int i = 0, n = s.length();
    while(i<n){
        if(s.length()==t.length()){
        if(s[i] == t[i]){
            m += 'G';
            i++;
        }
        else{
            m += 'B';
            i++;
        }
    }
    else {
        cout<<"TRY AGAIN"<<endl<<"DON'T LOOSE HOPE"<<endl;
        break;
    }
    }
    cout<<m<<endl;
}
return 0;
}