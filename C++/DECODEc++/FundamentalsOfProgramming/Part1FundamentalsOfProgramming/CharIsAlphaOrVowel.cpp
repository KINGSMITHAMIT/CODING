#include<bits/stdc++.h>
using namespace std;
int main(){
cout << "RADHE_RADHE" << endl;
int t;
cout<<"enter no. of test cases " << endl;
cin>> t;
while(t--){
    char ch;
    cout<<"enter your character " << endl;
    cin>>ch;
    int ASCII;
    ASCII = int(ch);
    if((ASCII>=97&&ASCII<=122)||(ASCII>=65&&ASCII<=90)){
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U'){
            cout<<ch<<" is a vowel" << endl;
        }
    else{
        cout<<ch<<" is a consonant" << endl;
    }
    }
    else{
        cout<<"invalid character" << endl;
    }

}
return 0;
}