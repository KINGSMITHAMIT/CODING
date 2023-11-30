#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout << "Radhe_Radhe" << endl;

    int n;
    cout << "Input n : ";
    cin >> n;
    vector<int> v1(n * n);
    vector<vector<int>> v2(n, vector<int>(n));
    int c = 0;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            v2[i][j] = ++c;
        }
    }
     for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            cout << v2[i][j] << " ";
        }
        cout << endl;
    }

    int minr = 0, maxr = n - 1, minc = 0, maxc = n - 1;
    int t = 0;
    while (minr <= maxr && minc <= maxc)
    {
        for (int j = minc; j <= maxc && t < n * n; j++)
        {
            v1.push_back(v2[minr][j]);
            t++;
        }
        minr++;
        for (int i = minr; i <= maxr && t < n * n; i++)
        {
            v1.push_back(v2[i][maxc]);
            t++;
        }
        maxc--;
        for (int j = maxc; j >= minc && t < n * n; j--)
        {
            v1.push_back(v2[maxr][j]);
            t++;
        }
        maxr--;
        for (int i = maxr; i >= minr && t < n * n; i--)
        {
            v1.push_back(v2[i][minc]);
            t++;
        }
        minc++;
    }
    int k = 0;
    for (int i = 0; i <n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            v2[i][j] = v1[k];
            k++;
        }
    }
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            cout << v2[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}