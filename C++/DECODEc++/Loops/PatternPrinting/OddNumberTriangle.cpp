//for printing the odd nos. 
//for (int i = 1; i<=2*n-1; i+=2){
//cout << i;}

#include<bits/stdc++.h>
using namespace std;
int main(){
cout<<"Radhe_Radhe"<<endl;
int n;
cout<<" Enter a no. for your the pattern"<<endl;
cin>>n;
for (int i = 1; i<=n; i++){
    for(int j =1; j<=2*i-1; j+=2){
        cout<<j;
}
cout<<endl;
}
return 0;
}
