#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
cin>>x;
//1357 8 10 12 -> 31 days
 // 4 11 -> 30 days
// 2 - 28 days
switch(x<=7 && x%2!=0){
     case 1 : 
     cout<<"31";
     }
switch(x>=8 && x%2==0){
     
     case 1 : 
     cout<<"31";
     }
switch(x==4 || x==6  || x==9 || x==11){
     case 1 :
     cout<<"30";
}
switch(x){
     case 2 :
     cout<<"28";
}

return 0;
}