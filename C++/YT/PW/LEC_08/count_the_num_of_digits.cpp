// cache -- ki 0 bhi toh ek digit haitoh uske liye toh while run karega hi nahi toh o/p mai 0 de dega
// 0 -- o/p 1
#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int digits =0;
int x = n;
while(n>0){
    
    digits++;
    n=n/10;
}
if (x == 0) cout << 1 << endl;
else cout<< digits<<endl;
return 0;
}