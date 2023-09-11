#include<bits/stdc++.h>
using namespace std;
int main(){
cout <<"RADHE_RADHE"<<endl;
cout<<"enter the no. of test cases"<<endl;
int t;
cin>>t;
while(t--){
    int a, b, c;
    cout<<" enter the three sides of the triangle"<<endl;
    cin>>a>>b>>c;
    if(a+b>c){
        if(a+c>b){
            if(b+c>a){ //not even equals to,  should always be greater than
                cout<<"the triangle is possible"<<endl;
            }
            else{
        cout<<"not a triangle"<<endl;
    }
    }
    
}
    else{
        cout<<"not a triangle"<<endl;
    }
}
return 0;
}