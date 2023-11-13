// #include<bits/stdc++.h>
// using namespace std;

// int main(){
// cout<<"Radhe_Radhe"<<endl;
// int m, n;
// cout<<"enter the no.of rows for your array"<<endl;
// cin>>m;
// cout<<"enter the no.of columns for your array"<<endl;
// cin>>n;
// int arr[m][n];
// for(int i=0;i<m;i++){
//     for(int j=0; j<n;j++){
//         cin>>arr[i][j];
//     }
// }
// for(int i=0;i<m;i++){
//     for(int j=0; j<n;j++){
//         cout<<arr[i][j];
//     }
// }

// return 0;
// }

// /* The `#include<bits/stdc++.h>` is a preprocessor directive that includes the entire standard
// library in C++. It is a shortcut to include all the necessary header files for common operations
// like input/output, data structures, algorithms, etc. */

// #include<bits/stdc++.h>
// using namespace std;

// void display( int a, int b, int arr[][3]) {
//     for(int i=0;i<a;i++)
//         for(int j=0; j<b;j++)
//             cout<<arr[i][j];
// }

// int main() {
//     cout<<"Radhe_Radhe"<<endl;
//     int m, n;
//     cout<<"enter the no.of rows for your array"<<endl;
//     cin>>m;
//     cout<<"enter the no.of columns for your array"<<endl;
//     cin>>n;
//     int arr[m][n];
//     for(int i=0;i<m;i++)
//         for(int j=0; j<n;j++)
//             cin>>arr[i][j];
    
//     display(arr, m, n);
//     return 0;
// }

// C++ Program to display the elements of two
// dimensional array by passing it to a function

// #include <iostream>
// using namespace std;

// // define a function 
// // pass a 2d array as a parameter
// void display(int n[][2]) {
//     cout << "Displaying Values: " << endl;
//     for (int i = 0; i < 3; ++i) {
//         for (int j = 0; j < 2; ++j) {
//             cout << "num[" << i << "][" << j << "]: " << n[i][j] << endl;
//         }
//     }
// }

// int main() {

//     // initialize 2d array
//     int num[3][2] = {
//         {3, 4},
//         {9, 5},
//         {7, 1}
//     };

//     // call the function
//     // pass a 2d array as an argument
//     display(num);

//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int main(){
int m, n;
cout<<"enter the no.of rows"<<endl;
cin>>m;
cout<<"enter the no.of columns"<<endl;
cin>>n;
int arr [m][n];
// int arr[m][n]= {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
// int arr[2][8] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
for(int i=0; i<m; i++){
    for(int j= 0;j<n;j++){
        cin>>arr[i][j];
    }
}
for(int i=0; i<m; i++){
    for(int j= 0;j<n;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}
return 0;
}