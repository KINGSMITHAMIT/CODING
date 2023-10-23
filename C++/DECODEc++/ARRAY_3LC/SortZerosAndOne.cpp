#include<bits/stdc++.h>
using namespace std;
void display(vector<int>&v){
    for(int i =0; i < v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return;
}
/**
 * The function swaps the elements at positions a and b in a vector.
 * 
 * @param v The vector of integers that we want to perform the swap operation on.
 * @param a The index of the first element to be swapped in the vector.
 * @param b The parameter "b" is an integer representing the index of the second element to be swapped
 * in the vector "v".
 */
void swap(vector<int>&v, int a, int b){
    int temp = v[a];
    v[a] = v[b];
    v[b] = temp;
return;
}
/**
 * The function sorts a vector of integers containing only 0s and 1s using a two-pass method.
 * 
 * @param v The parameter "v" is a reference to a vector of integers.
 */
void sort01M1(vector<int>&v) { // Two Pass method, The total time taken = 2n;
    int noz = 0; // for storing nos. of zeros
    int noo = 0; // for storingnos. of ones

    //the loop runs n time for the 1st time
    for(int i = 0; i < v.size(); i++){
        if(v[i] == 0) noz++;
        else noo++;//else if( v[i] == 1 ) noo++;
    }
    //my logic for swapping the 0's and 1's.
    // for(int i = 0; i < noz-1; i++){
    //     v[i] = 0;
    // }
    // for(int i = noz; i < (noo+noz)-1; i++){
    //     v[i] = 1;
    // }

    //beloow 4 lines of code are sir's way of logic 
    //the loop runs n time for the 2nd time
    for(int i= 0; i<v.size(); i++){
        if(i< noz) v[i] = 0;
        else v[i] = 1;
    }
    cout<<endl;
    return;
}
/**
 * The function uses the two pointer method to sort a vector of integers containing only 0s and 1s.
 * 
 * @param v The parameter "v" is a reference to a vector of integers.
 */
void sort01M2(vector<int>&v) { // Two Pointer method -->two variables, The total time taken = 2n;
int n = v.size();
int i = 0, j = n-1;
while(i<=j){
    if(v[i]==0) i++;
    if(v[j]==1) j--;
    if(i>j) break; // if we not terminate it then then the next if loop will run thereby swapping the sorted loop. 
    if(v[i]==1 && v[j]==0) {    //it will work if you use else if  // or move it to up
        swap(v, i, j);
        i++;
        j--;
    }
}
return;
}
int main(){
    cout<<"Radhe_Radhe"<<endl;
    vector<int>v;
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    // sort(v.begin(), v.end()); //not the way to do
    
    display(v);
    sort01M1(v);
    display(v);
    sort01M2(v);
    display(v);
return 0;
}