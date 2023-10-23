//leetcode 88
//the merge function is all set, done by --> [MY CHEAT LOGIC]
//but the main function is too be completed.......

#include<bits/stdc++.h>
using namespace std;
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int>nums;
        for(int i = 0; i<m; i++){
            nums.push_back(nums1[i]);
        }
        int z= nums.size();
        int i=0, j=0, k=0;

        while(i<z && j<n){
            if(nums[i]<=nums2[j]){
                nums1[k]=nums[i];
                i++;
            }
            else{
                nums1[k]=nums2[j];
                j++;
            }
            k++;
        }
        while(i<z){
            nums1[k]=nums[i];
                i++;
                k++;
        }
        while(j<n){
            nums1[k]=nums2[j];
                j++;
                k++;
        }
            }
    int main(){
        vector<int>nums1;
        vector<int>nums2;
        int 

return 0;
}
