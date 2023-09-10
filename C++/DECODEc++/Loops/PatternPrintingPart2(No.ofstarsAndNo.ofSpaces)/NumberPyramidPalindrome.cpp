#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"Radhe_Radhe"<<endl;
    int n;
    cout<<"Enter the num. of rows you want to print in your Number Palindrome Pyramid"<<endl;
    cin>>n;
    //My approach --> inverted space loop + half number loop flipped + normal small number loop
for(int i=1; i<=n; i++) {
    for(int j=1; j <=n-i; j++){
        cout<<" ";
    }
    for(int k = 1; k <=i; k++) {
        cout<<k;
}

    for(int l = i-1; l>=1; l--) { 
        cout<<l;
        
    }
    
    cout<<endl;
}
return 0;
}