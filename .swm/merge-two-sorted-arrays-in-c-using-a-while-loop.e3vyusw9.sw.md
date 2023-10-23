---
id: e3vyusw9
title: " merge two sorted arrays in C++ using a while loop."
file_version: 1.1.3
app_version: 1.18.2
---

It looks like you are trying to merge two sorted arrays in C++ using a while loop. However, your code has some problems that prevent it from working correctly. Here are some of the issues I found:

*   Your while loop condition is `i<n1 || j<n2`, which means it will continue until both i and j reach the end of their respective arrays. However, **this can cause an out-of-bounds error if one of the arrays is exhausted before the other**. For example, if i becomes equal to n1, then arr1\[i\] will be invalid and may cause a segmentation fault. To avoid this, you should use `i<n1 && j<n2` as your while loop condition, and then use two separate while loops to copy the remaining elements from the longer array to arr.

*   Your if statements inside the while loop are not mutually exclusive, which means they can both execute in the same iteration. For example, **if arr1\[i\] and arr2\[j\] are equal, then both if conditions will be true and both elements will be copied to arr. This can cause some elements to be skipped or duplicated in the merged arra**y. To avoid this, you should use an else-if statement or a nested if-else statement to ensure that only one element is copied at a time.

*   You are calling the display function inside the while loop, which means you are printing the contents of arr after every iteration. This can cause unnecessary output and slow down your program. You should call the display function only once after the while loop is finished.

Here is a possible way to fix your code:

```cpp
#include <iostream>
using namespace std;

void display(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr1[] = {6, 7, 8, 9}; //{1, 4, 5, 6};
    int arr2[] = {8, 9, 10, 11};//{2, 3, 6, 7, 11};
    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    int n2 = sizeof(arr2)/sizeof(arr2[0]);
    int arr[n1+n2];
    int n = sizeof(arr)/sizeof(int);
    cout<<n1<<endl;
    cout<<n2<<endl;
    cout<<n<<endl;
    display(arr1, n1);
    display(arr2, n2);
    int i = 0, j=0, k=0;
    // Use && instead of || in the while loop condition
    while( i<n1 && j<n2){
        // Use else-if or nested if-else to make the conditions mutually exclusive
        if(arr1[i]<=arr2[j]){
            arr[k] = arr1[i];
            k++;
            i++;
        }
        else{
            arr[k] = arr2[j];
            k++;
            j++;
        }
        // Do not call display inside the loop
        //display(arr, n);
    }
    // Use two separate while loops to copy the remaining elements from the longer array
    while(i < n1){
        arr[k] = arr1[i];
        k++;
        i++;
    }
    while(j < n2){
        arr[k] = arr2[j];
        k++;
        j++;
```

Your if statements inside the while loop are not mutually exclusive can you explain it to me

Sure, I can explain what I meant by “your if statements inside the while loop are not mutually exclusive”. This means that there is a possibility that both if conditions can be true at the same time, and both if blocks can be executed in the same iteration of the loop. For example, suppose that arr1\[i\] and arr2\[j\] are both equal to 8. Then, both of these if conditions will be true:

```
if(arr1[i]<=arr2[j]){
    // ...
}
if(arr2[j]<=arr1[i]){
    // ...
}
```

This will cause both 8s to be copied to arr, and both i and j to be incremented. This can lead to some problems, such as:

*   Skipping some elements in the original arrays. For example, if arr1\[i\] is 9 and arr2\[j\] is 10, then the second if block will not be executed, and 10 will not be copied to arr.

*   Duplicating some elements in the merged array. For example, if arr1\[i\] and arr2\[j\] are both 11, then both if blocks will be executed, and 11 will be copied twice to arr.

*   Exceeding the size of the merged array. For example, if n1 and n2 are both 4, then the merged array should have a size of 8. However, if both if blocks are executed in every iteration, then k will reach 8 before i and j reach 4, and arr\[k\] will be out of bounds.

To avoid these problems, you should make sure that only one if block is executed at a time. You can do this by using an else-if statement or a nested if-else statement. For example:

```cpp
if(arr1[i]<=arr2[j]){
    // ...
}
else if(arr2[j]<=arr1[i]){
    // ...
}
```

or

```cpp
if(arr1[i]<=arr2[j]){
    // ...
    if(arr2[j]<=arr1[i]){
        // ...
    }
}
else{
    // ...
}
```

These statements will ensure that only one element is copied to arr at a time, and that no elements are skipped or duplicated.

I hope this clarifies what I meant by “your if statements inside the while loop are not mutually exclusive”. 😊

<br/>

This file was generated by Swimm. [Click here to view it in the app](https://app.swimm.io/repos/Z2l0aHViJTNBJTNBQ09ESU5HJTNBJTNBS0lOR1NNSVRIQU1JVA==/docs/e3vyusw9).