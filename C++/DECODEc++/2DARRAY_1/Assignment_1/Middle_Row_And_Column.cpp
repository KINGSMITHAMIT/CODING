#include <iostream>
using namespace std;
int main() {
    cout << "Radhe_Radhe" << endl;
    int m, n;
    cout << "Enter the odd number of rows: ";
    cin >> m;
    cout << "Enter the odd number of columns: ";
    cin >> n;

    if (m % 2 == 0 || n % 2 == 0) {
        cout << "Please enter odd number of rows and columns" << endl;
        return 0;
    }
    else{
    int a[m][n];
    cout << "Enter the elements into your array:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (i == (m/2) || j ==(n/2)) {
                cout << a[i][j]<<" ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
    }
    return 0;
}
