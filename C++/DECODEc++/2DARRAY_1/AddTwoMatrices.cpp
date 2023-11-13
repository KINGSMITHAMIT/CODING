#include<bits/stdc++.h>
using namespace std;
int main(){
int a1[2][3] ={{1, 2, 3},{4, 5, 6}};
int a2[2][3] = {{7, 8,9},{10,11,12},};
int res[2][3];
for(int i=0; i<2; i++){
    for(int j=0; j<3; j++){
        res[i][j] = a1[i][j]+ a2[i][j];
    }
}
for(int i=0; i<2; i++){
    for(int j=0; j<3; j++){
        cout<<res[i][j]<<" ";
    }
    cout<<endl;
}

return 0;
}