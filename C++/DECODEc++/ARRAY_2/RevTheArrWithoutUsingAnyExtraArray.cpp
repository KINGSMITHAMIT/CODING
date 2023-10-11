#include<bits/stdc++.h>
using namespace std;
void display(vector<int>&z){
    for(int i=0; i<z.size(); i++){
        cout << z.at(i) << " ";
    }
    cout << endl;
}
void rev_in_built(vector<int>&z){
    reverse(z.begin(), z.end());
}
void rev_part(int i, int j, vector<int>&v){
    int temp = 0;
    while(i<=j){
        temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        i++;
        j--;
    }
    cout<<endl;
    return;
}
int main(){
cout<<"Radhe_Radhe"<<endl;
vector<int> v;
int s, temp = 0;
// s for storing the  size of the vector
// temp for swapping the vector elements
cout<<"Enter the size: ";
cin>>s;
cout<<endl;
cout<<"Enter the elements in the vector "<<"\n";
for(int i=0; i<s; i++){
    int n;
    cin>>n;
    v.push_back(n);
}
display(v);// printing the initialized vector
// int x;
// if(s%2==0) x = s/2;
// else  x = (s-1)/2;
// for(int i=0; i<x; i++){
//     temp = v[i];
//     v[i] = v[(s-1)-i];
//     v[(s-1)-i] = temp;
// }
for(int i=0, j = v.size()-1; i<=j; i++, j--){
        temp = v[i];
        v[i] = v[j];
        v[j] = temp;
}
display(v); // after reversing by using logic
rev_in_built(v);
display(v); // after reversing by using the built-in functions
rev_part(1, 4, v);
display(v); 
return 0;
}