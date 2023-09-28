#include<bits/stdc++.h>
using namespace std;
void find(int n, int *fd, int *ld){
    *ld = n%10;
while(n>9){
    n = n/10;
}
*fd = n;
}
int main(){
cout<<"Radhe_Radhe"<<endl;
int n;
cout<<"Please enter your number for which you would like to print the last and first digits. "<<endl;
cin>>n;
int fd, ld;
int* ptr1 = &fd; 
int* ptr2;
ptr2 = &ld;
find(n, ptr1, ptr2);
cout<<"Your first digit is "<<fd<<endl;
cout<<"Your last digit is "<<ld<<endl;
return 0;
}   