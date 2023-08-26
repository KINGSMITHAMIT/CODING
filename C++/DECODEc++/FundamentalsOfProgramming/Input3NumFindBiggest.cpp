#include<bits/stdc++.h>
using namespace std;
int main(){
cout<<"Radhe_Radhe"<<endl;
cout<<"enter no.of teat cases "<<endl;
int t;
cin>>t;
while(t--){
    int a, b, c;
    cout<<"Enter your desired three num."<<endl;
    cin>>a>>b>>c;
    if (a>b){
        if(a>c){
            cout<<"The biggest num is "<<a<<endl;
        }
        else{
            cout<<"The biggest num is "<<c<<endl;
        }
    }
    else {
        if(b>c){
            cout<<"The biggest num is "<<b<<endl;
        }
        else{
            cout<<"The biggest num is "<<c<<endl;
        }
    }

}
return 0;
}