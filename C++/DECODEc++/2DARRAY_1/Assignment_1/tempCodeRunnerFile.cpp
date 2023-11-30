#include <bits/stdc++.h>
using namespace std;
void mid_row_column(int &arr[][], int a, int b){
    for(int i = 0 ; i< a; i++){
        for(int j = 0; j<b; j++){
            if(i == (a%2)+1 || j == (b%2)+1) cout<<arr[i][j];
            else cout<<" ";
        }
        cout<<endl;
    }

}
int main()
{