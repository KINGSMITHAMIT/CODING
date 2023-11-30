#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout << "Radhe_Radhe" << endl;
    int m, n;
    cout << "Enter the no.of rows : ";
    cin >> m;
    cout << endl;
    cout << "Enter the no.of columns : ";
    cin >> n;
    int a[m][n];
    cout << endl;
    cout << "Enter the elements into your array " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    int l1, r1;
    cout << "Enter your 1st coordinate" << endl;
    cin >> l1 >> r1;
    int l2, r2;
    cout << "Enter your 2nd coordinate" << endl;
    cin >> l2 >> r2;
    int sum = 0;
    for (int i = l1; i <= l2; i++)
    {
        for (int j = r1; j <= r2; j++)
        {
            sum += a[i][j];
        }
    }
    cout << sum;
    return 0;
}