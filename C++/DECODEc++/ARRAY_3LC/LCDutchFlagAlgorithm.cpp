// SortZeroOneAndTwo //SortColors 
//leetcode75
// ######****** if the interviewer asks this type of question than he expects you to answer it through dutch flag method (dutch flag method) [8/10], but you can code it with the help of two pass mthod.*******########

#include<bits/stdc++.h>
using namespace std;
void swap(vector<int> &v, int a, int b){
    int temp = v[a];
    v[a] = v[b];
    v[b] = temp;
    return;
}

void sort1(vector<int>&v){     // MY WAY   
    for(int i =0; i < v.size(); i++){
        for(int j= i; j < v.size(); j++){
            if(v[j]< v[i]){
                int temp = v[i];
                v[i] = v[j];
                v[j] = temp;
            }
            else continue;
        }
    }
}

void sort2(vector<int>&nums){    //sir's two pass algorithm method
    int n = nums.size();
    int noz = 0;
    int noo = 0;
    int notw = 0;
    for(int i=0; i < n; i++){
        if (nums[i] == 0) noz++;
        else if (nums[i] == 1) noo++;
        else notw++;
    }
    //fill
    for(int i=0; i < n; i++){
        if(i<noz) nums[i] =0;
        else if(i<(noz+noo)) nums[i] = 1;
        else nums[i] = 2;
    }
    return;
}

void sort3(vector<int>&nums){      // ##**Three Pointer Method, Dutch Flag Method **## //
    int n = nums.size();
    int low = 0;
    int mid = 0;
    int hi = n-1;
    while(mid <= hi){ // 3 conditions
            // one pass solution
            // 1) mid ke baare mai socho
            // 2) 0 to low-1--> 0, hi+1 to end -->2
            // low to mid-1 --> 1;

        if(nums[mid]==2){
            swap( nums, mid, hi);
            hi--;
        }
        if(nums[mid] == 0){
            swap(nums, mid, low);
            low++;
            mid++; // make sure that your mid value is never less than the low and never be greater than hi but can be equal to it.
        }
        if(nums[mid] == 1){
            mid++;
        }

    }    
}

void display(vector<int>&v){
    for(int i =0; i < v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return;
}

int main(){
vector<int> v;
cout<<"Radhe_Radhe"<<endl;
v.push_back(0);
v.push_back(1);
v.push_back(2);
v.push_back(2);
v.push_back(1);
v.push_back(0);
display(v);
// sort1(v);
// display(v);
sort3(v);
display(v);

return 0;
}