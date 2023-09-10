#include<bits/stdc++.h>
using namespace std;
int main(){
cout<<"Radhe_Radhe"<<endl;
int n;
cout<<"Enter the number of rows u want in your rhombus to have"<<endl;
cin>>n;
//  My approach
for(int i=1;i<=n;i++){
    int a = 0;
    for(int j=1; j<=2*n-1; j++){
        if((i+j)>=(n+1)){
            cout<<"*";
        a++;
        if (a==n) break;
        }
        else 
        cout<<" ";
}
cout<<endl;
}
// sir's approach --> two nested loops
for(int i=1; i<=n; i++) {
    for(int j=1; j <=n-i; j++){
        cout<<" ";
    }
    for(int k = 1; k <=n; k++) {
        cout<<"*";
}
    cout<<endl;
}
return 0;
}