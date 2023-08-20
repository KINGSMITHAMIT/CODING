//input : 5
//output :
           //123456
           //1    6
           //1    6
           //1    6
           //123456

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>> n;
for(int i = 1;i<=n; i++){
for (int j =1;j<7; j++){
    if(j==1|| j==6||i==1||i==n){
        cout<<j;
    }
    else {
        cout<<" ";
    }
}
cout<<endl;
}
return 0;
}