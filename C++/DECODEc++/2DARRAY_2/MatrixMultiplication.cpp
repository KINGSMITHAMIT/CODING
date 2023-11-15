#include<bits/stdc++.h>
using namespace std;
int m2(int x){
    

}
int main(){
int a1[3][3]={{1,4,7},{2,5,8},{3,6,9}};
int a2[3][3]={{1,0,0},{0,1,0},{0,0,1}};
int a3[3][3];
//printing the matrix
for(int i=0; i<3; i++){
    for(int j = 0; j<3; j++){
        cout<<a1[i][j]<<" ";
    }
    cout<<endl;
}
cout<<endl;
//printing the matrix
for(int i=0; i<3; i++){
    for(int j = 0; j<3; j++){
        cout<<a2[i][j]<<" ";
    }
    cout<<endl;
}
cout<<endl;
int temp=0;
int n=0;
int i,j;
for(int i=0; i<3; i++){
    for(j=0; j<3; j++){
        a3[i][j] =0;
        for(int k=0; k<3;k++){
            a3[i][j] += (a1[i][k]*a2[k][j]);
            
        }
    
    }
    
    }

    //printing the matrix
for(int i=0; i<3; i++){
    for(int j = 0; j<3; j++){
        cout<<a3[i][j]<<" ";
    }
    cout<<endl;
}
cout<<endl;
return 0;
}

