#include<bits/stdc++.h>
using namespace std;
int main(){
cout<<"Radhe_Radhe"<<endl;
int n;
cout<<"Enter a no. for your the pattern"<<endl;
cin>>n;
for (int i = 1; i<=n; i++){
    // my 1st way -->
//     int a = 65;
//     for(int j =1; j<=n; j++){
//         cout<< (char)a<<" ";
//         a += 1;
// }
    // my 2nd way -->
    for(int j =1; j<=n; j++){
        cout<< (char)(j+64)<<" "; // yaha par agar mai + 65 kar deta toh prinnt hona B se start ho jata.
    }
    // ascii of 'a' = 97 so if j = 1, then (j+96)
cout<<endl;
}
return 0;
}