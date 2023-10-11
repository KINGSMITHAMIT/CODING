#include <iostream>
using namespace std;

void print (int *p) {
    cout << "p = " << p << endl; // prints the address of p
    cout << "*p = " << *p << endl; // prints the value pointed by p
    cout << "sizeof(p) = " << sizeof(p) << endl; // prints the size of p
}

int main () {
    int arr [5] = {1, 2, 3, 4, 5};
    cout << "arr = " << arr << endl; // prints the address of arr
    cout << "*arr = " << *arr << endl; // prints the value of arr[0]
    cout << "sizeof(arr) = " << sizeof(arr) << endl; // prints the size of arr
    print (arr); // passes arr to print
    print (arr + 1); // passes arr[1] to print
    return 0;
}
