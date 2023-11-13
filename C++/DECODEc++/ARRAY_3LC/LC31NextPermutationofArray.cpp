//LEETCODE-31
//CAN BE CONSIDERED MEDIUM-HARD
//FIRST FIND THE PIVOT INDEX
//TO BE CORRECTED AND WORKED ON
#include<bits/stdc++.h>
using namespace std;
void display(vector<int>&v){
    for(int i = 0; i < v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return;
}


void nxt_permut(vector<int>&nums){
    int n= nums.size();
    int pivot_indx = -1;       // for storing the pivot index (point whee the change is to be happen )

    for(int i = n-2; i >= 0; i--){
        if(nums[i]<nums[i+1]){
            pivot_indx = i;
            break;
        }
    }
    display(nums);
    reverse(nums, pivot_idx+1, n);
    swap(nums, pivot_indx);

    return;
}


void reverse(vector<int>&nums, int a, int b){
    vector<int>v;
    for(int i = a, j = 0;  i<=b, j<(b-a+1); i++, j++){
        v[j] = nums[i];
    }
    int n= v.size();
    for(int i = a; i <=b; i++ ){
        nums[i] = v[n-i];
    }
    return;
}
void swap(vector<int>&v, int a){
    int temp = v[a];
    v[a] = v[a+1];
    v[a+1] = temp;
}
int main(){
cout<<"Radhe_Radhe"<<endl;
vector<int> nums;
nums.push_back(1);
nums.push_back(4);
nums.push_back(2);
nums.push_back(3);
display(nums);
nxt_permut(nums)                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           ;
display(nums);
return 0;

}