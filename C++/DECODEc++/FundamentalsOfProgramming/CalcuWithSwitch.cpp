#include<iostream>
using namespace std;
int main(){
int a,b;
char op;
cout<<"Enter the problem"<<endl;
cin>>a>>op>>b;
// if (op=='+') cout<<a+b;
// if (op=='-') cout<<a-b;
// if (op=='*') cout<<a*b;
// if (op=='/') cout<<a/b;
switch(op){
case '+' :
cout<<a+b;
break;
case '-' :
cout<<a-b;
break;
case '*' :
cout<<a*b;
break;
case '/' :
cout<<a/b;
break;
default :
    cout<<"Invalid operator";
}
return 0;   
}