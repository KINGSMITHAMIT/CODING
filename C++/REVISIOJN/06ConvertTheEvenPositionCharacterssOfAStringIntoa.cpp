#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the string"<<endl;
    cin>>n;
    cout<<"Enter the string of "<<n<<" characters "<<endl;
char str[n]; 
cin>>str;

for(int i =0; i<n; i++){
    if(i % 2 == 0)
    str[i] = 'a';
    else continue;
}


cout<<str<<endl;

return 0;

}