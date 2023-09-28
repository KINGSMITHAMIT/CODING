#include<bits/stdc++.h>
using namespace std;
int main(){
int a = 15;
int *ptr = &a;
int b = (*ptr)++; // POST INCREMENT   (*ptr)++ => *ptr = *ptr + 1, *ptr is being updated but after that code of line is executed and so b stores the value here 15. becoz it becomes 16 after the code has been run through that line.     
int c = ++(*ptr); // PRE INCREMENT    ++(*ptr) => *ptr = *ptr + 1, *ptr is being updated first and stored in memory and as then is stored in b.
cout<<a<<" "<<b<<" "<<c<<endl;
return 0;
}