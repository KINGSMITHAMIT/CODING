#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout << "Radhe_Radhe" << endl;
    int m, n;
    cout << "Enter the no. of rows & columns in the matrix" << endl;
    cin >> m >> n;
    int a[m][n];
    cout << "Enter the elements into the array" << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    cout << endl;
    // m=4,n=5;
    // int a[m][n]={{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20}};
    // printing the matrix
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << "\n";
    // printing spiral
    int minr = 0, maxr = m - 1, minc = 0, maxc = n - 1;
    int i, j;        // for printing 2d array
    int tne = m * n; // total no of elements, check condition, so that the the printing does not exceed the requirement
    int count = 0;
    while (minr <= maxr && minc <= maxc)
    {
        for (int j = minc; j <= maxc && count < tne; j++)
        {
            cout << a[minr][j] << " ";
            count++;
        }
        minr++;
        for (int i = minr; i <= maxr && count < tne; i++)
        {
            cout << a[i][maxc] << " ";
            count++;
        }
        maxc--;

        for (int j = maxc; j >= minc && count < tne; j--)
        {
            cout << a[maxr][j] << " ";
            count++;
        }
        maxr--;

        for (int i = maxr; i >= minr && count < tne; i--)
        {
            cout << a[i][minc] << " ";
            count++;
        }
        minc++;
    }
    cout << endl;
    return 0;
}