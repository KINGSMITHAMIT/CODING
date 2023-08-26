//Input
//3
//12345
//11011
//12346
//Output
//Yes
//Yes
//No
#include<bits/stdc++.h>
using namespace std;
int main(){
//cout<<"Radhe_Radhe"<<endl;
int t;
cout<<"Enter no. of test cases"<<endl;
cin>>t;

while(t--){
    string n;
    cout<<"Enter your string num. "<<endl;
    cin>>n;
    int yes=0;
    for(int i = 0; i<n.length();i++)
    {
        if (n[i]==5||n[i]==0){
            yes++;
            break;
        }
    }
    if (yes>=1){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
}
return 0;
}
// Update the '_' in the code below to solve this problem
//
//#include <iostream>
//#include <string>
//using namespace std;
//
//int main() 
//{
//  int t;
//  cin>>t; 
//  while(t--)
//  {
//   string A;
//   cin>>A;
//   int flag=0;
//
// If any '0' or '5' is found in the string A - then set flag as 1 and exit the loop
//   for(int i=0; i<A.length();i++)
//      {
//        if(A[i]=='0' || A[i]=='5')
//          {
//            flag = 1;
//            break;
//          } 
//      }
//    if(flag ==  1)
//      {
//        cout<<"Yes"<<endl;
//      }
//    else
//      {
//        cout<<"No"<<endl;
//      }
//
//  }
// return 0;
//}
//   