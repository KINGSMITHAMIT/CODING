#include<bits/stdc++.h>
using namespace std;
void display(vector<int> &v, int n ){
    for(int i = 0; i< n; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
void swap(vector<int> &v, int a, int b){
    int temp = v[a];
    v[a] = v[b];
    v[b] = temp;
    return;
}
// void sort (vector<int> &v, int n ){
//     for( int i = 0; i< n-1; i++){
//         int x = v[i];
//         for(int j = 1; j< n; j++){
//             int y = v[j];
//             if(x>y) swap (v, x, y);
//             else continue;
//         }
// }
// }
int main(){
cout<<"Radhe Radhe"<<endl;
vector<int> v;
v.push_back(1);
v.push_back(-2);
v.push_back(3);
v.push_back(-4);
v.push_back(-5);
v.push_back(6);
v.push_back(8);
display(v, v.size());
int i=0, j= (v.size()-1);
while(i<=j){
    if(v[i]<0)i++;
    if(v[j]>0)j--;
    if(i>j) break;
    if (v[i]>0 && v[j]<0) {
        swap(v, i, j);
        i++;
        j--;
        }
    
}
display(v, v.size());
// sort(v, v.size());
display(v, v.size());
return 0;
}