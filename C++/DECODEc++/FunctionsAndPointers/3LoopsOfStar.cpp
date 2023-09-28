#include<bits/stdc++.h>   // iostream (input_output_stream) if i would have used this header file insted of the above one then i would have to usse thi s header file.
#include<cmath> // for math functions
using namespace std;
void starp(int x){    
    for(int i = 1; i <=x; i++){
        for(int j = 1; j <=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
int main(){
cout<<"Radhe_Radhe"<<endl;
int a;
for(int i = 1; i <=3 ; i++){
    cout<<"Enter a number for your star patten"<<endl;
    cin>>a; 
    starp(a);
}
cout<<endl;
cout<<sqrt(9.9);
return 0;
}