// Shayad aaghe ja kar mein ishe kar lun
#include<bits/stdc++.h>
using namespace std;
int main(){
cout<<"Radhe_Radhe"<<endl;
int n;
cout<<" Enter a no. for your the pattern"<<endl;
cin>>n;

for (int i = n; i>=1; i--){
    // very important thing here is this j loop part down -- what's its functionality
    // to print first 'i' odd numbers
        for(int j = 1; j<=2*i-1; j+=2){
        cout<<j;
}
// a different way to do it
// int a = 1;
// for(int j =1; j<=i; j++){
//     cout<<a;
//     a+=2;
// }
cout<<endl;
}

return 0;
}
