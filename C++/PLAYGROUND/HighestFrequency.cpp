#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"Radhe Radhe"<<endl;
    string s = "physicswallah";
    // int max=0;
    // for(int i =0; i<s.length(); i++){
    //     int count =1;
    //     for(int j =i+1; j<s.length(); j++){
    //         if(s[i]== s[j])
    //         count++;
    //     }
    //     if(max<count) max = count;
    // }
    // for(int i =0; i<s.length(); i++){
    //     char ch =s[i];
    //     int count=1;
    //     for(int j =i+1; j<s.length(); j++){
    //         if(s[i]==s[j]) count++;        
    //     }
    //     if(count == max) cout<<ch<<" "<<count<<endl;
    // }
    vector<int> arr(26, 0);
    for(int i =0; i< s.length(); i++){
        int ascii = (int)s[i];
        arr[ascii-97]++;
    }
    int max =0;
    for(int i=0; i<arr.size(); i++){
        if(arr[i]>max) max = arr[i];
    }
    for(int i =0; i< arr.size(); i++){
        if(arr[i]== max) cout<<(char)(i+97)<<" "<< arr[i]<<endl;
    }

    return 0;
    }
    
//     #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//     cout << "Radhe Radhe" << endl;
//     string s = "physicswallah";
//     vector<int> arr(26, 0);

//     // Count the frequency of each character
//     for (int i = 0; i < s.length(); i++) {
//         int ascii = (int)s[i];
//         arr[ascii - 97]++;
//     }

//     int maxCount = 0;

//     // Find the maximum count
//     for (int i = 0; i < arr.size(); i++) {
//         if (arr[i] > maxCount)
//             maxCount = arr[i];
//     }

//     // Print characters with the maximum count
//     for (int i = 0; i < arr.size(); i++) {
//         if (arr[i] == maxCount)
//             cout << (char)(i + 97) << " " << arr[i] << endl;
//     }

//     return 0;
// }
