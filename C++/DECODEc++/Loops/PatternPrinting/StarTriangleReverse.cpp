// row no. + no. of stars in that row = n+1
// => no. of stars =  (n+1) - i;
#include<bits/stdc++.h>
using namespace std;
int main(){
cout<<"Radhe_Radhe"<<endl;
// my_way
// int n,m;
// cout<<" Enter the no. of rows"<<endl;
// cin>>n;
// cout<<" Enter the no. of Columns"<<endl;
// cin>>m;
// for (int i = 1; i<=n; i++){
//     for (int j = m; j>=1; j--){
//         cout<<'*';
//     }
//     cout<<endl;
//     m -=1;
// }
//sir's_way
int n;
cout<<" Enter a no. for your the pattern"<<endl;
cin>>n;
for (int i = 1; i<=n; i++){
    for (int j = 1; j<=n +1 - i; j++){    
        cout<<"*";                          // cout<<'*';
    }
    cout<<endl;
}
return 0;
}
