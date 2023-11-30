#include <iostream>
using namespace std;
int main() {
    cout << "Radhe_Radhe" << endl;
    int n;
    cout << "Enter the number for matrix: ";
    cin >> n;

    int a[n][n];
    cout << "Enter the elements into your array:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j || i+j == n-1) {
                cout << a[i][j]<<" ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    
    }
    return 0;
}
