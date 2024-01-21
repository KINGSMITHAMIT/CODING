#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout << "Radhe_Radhe" << '\n';
    // create an array of characters by not assigning size
    char arr[] = "abcde";
    cout << sizeof(arr) / sizeof(arr[0]) << endl;


    cout << arr[5] << endl;
    cout <<"ascii value of backslash /0 is "<< (int)arr[5] << endl; // printing the ascii value of backslash.

    // calculating the size after initializing values to the array
    char art[5]={'a', 'b', 'c', 'd', 'e'};
    cout << sizeof(art) / sizeof(art[1]) << endl;
    //cout << art[5]<<endl;
    cout << (int)art[5]<<endl;

    return 0;
}



    /*o/p -->5
    here even though the array has 4 characters still the size of the array comes to be 5
    Why is that ?
    due to '/0' a special character called null
    -- it terminates the string
   * evenif you print it it won't give any error
   * but it is not visible
    ascii value = 0;
    other special character :-
    /t-->which is used to give tab space of 3
    /n-->next line
    */
