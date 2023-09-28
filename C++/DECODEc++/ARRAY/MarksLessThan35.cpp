#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"RADHE_RADHE"<<endl;
    int n;
    cout<<"enter the no. of students"<<endl;
    cin>>n;
    int marks[n];
for(int i=0;i<=n-1;i++){
    cout<<"please enter the marks of "<<i+1<<"th student: ";
    cin >> marks[i];
    cout<<endl;
}
for(int i=0;i<=n-1;i++){
    if (marks[i]<35){
        cout<<"The marks of the "<<i+1<<"th student is less than 35 ";
        cout<<"and its index positon is "<<i<<endl;
    }
    else continue;
}
    return 0;
}