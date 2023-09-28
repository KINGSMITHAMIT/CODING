#include<bits/stdc++.h>
using namespace std;
int main(){
cout<<"Radhe_Radhe"<<endl;
int n; 
cout<<"Enter the num for which you would like to print your pascal triangle"<<endl;
cin>>n;
for(int i=0; i<=n; i++){
    int curr =1;
    for(int j=0; j<=i;j++){
        cout<< curr<<" ";
        curr = curr*(i-j)/(j+1); // don't put brackets after curr(....)
    }
    cout<<endl;
}
return 0;
}