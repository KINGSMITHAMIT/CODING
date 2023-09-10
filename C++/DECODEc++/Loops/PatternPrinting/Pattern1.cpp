// Radhe_Radhe
//  Enter the no. of rows
// 3
//  Enter the no. of coumns
// 5
// *****
// *****
// *****
#include<bits/stdc++.h>
using namespace std;
int main(){
cout<<"Radhe_Radhe"<<endl;
int n,m;
cout<<" Enter the no. of rows"<<endl;
cin>>n;
cout<<" Enter the no. of coumns"<<endl;
cin>>m;
for (int i = 0; i<n; i++){
    for (int j = 0; j<m; j++){
        cout<<"*";
    }
    cout<<endl;
}
return 0;
}