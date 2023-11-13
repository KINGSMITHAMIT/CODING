#include<bits/stdc++.h>

using namespace std;
int main(){
    cout<<"Radhe_Radhe"<<endl;
int arr[][4] = {44, 66, 77, 44,53, 64, 66, 436}; // 
    int max = INT_MIN; // int max = arr[0][0];
for(int i=0; i<2; i++){
    for(int j=0; j<4; j++){
        if(max <= arr[i][j]) max = arr[i][j];
        else continue;
    }
}
cout<<max<<endl;
return 0;
}