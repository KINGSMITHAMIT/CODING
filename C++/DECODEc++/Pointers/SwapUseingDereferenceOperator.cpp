// # PASS BY REFERENCE
#include<bits/stdc++.h>
using namespace std;
//it modifies the values of the integer pointers x and y that are passed to it as arguments.
void swapM1(int *x, int *y) {     
    int temp = *x;
    *x = *y;
    *y = temp;
    // cout<<x<<" "<<y<<endl;
    return; //The return statement in the function is used to exit the function and return control to the calling function.
}
// WE ARE FETCHING THE VALUE 
void swapM2(int* x, int* y) { // DECLARE IT ACCORDING TO THE ACTUAL PARAMETERS YOU ARE PASSING 
    int temp = *x; // contol goes to x --> then it goes to the stoered address at x --> then it stores the value of that address location 
    *x = *y;
    *y = temp;
    return;
}
int main(){
cout<<"Radhe_Radhe"<<endl;
int m, n;
cout<<"Please enter two numbers for swapping"<<endl;
cin>>m>>n;
swapM1(&m, &n); // MAKE SURE TO DECLARE THE REQUIRED DATA TYPE IN THE FORMAL PARAMETERS DEPENDING ON THE TYPE OF ACTUAL PARAMETS YOU ARE PASSING
cout<<m<<" "<<n<<endl;
//for method 2 
int *a = &m; // # the address of m is stored in 'a' not '*a' 
int *b = &n;
swapM2(a,b); //WE  ARE PASSING THE ADDRESSES OF m & n
cout<<m<<" "<<n<<endl;
return 0;
}
// kakoi :) --> Translate
