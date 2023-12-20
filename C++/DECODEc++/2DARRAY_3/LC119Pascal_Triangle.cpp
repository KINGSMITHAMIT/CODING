#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> getRow(int rowIndex) {
        int m = rowIndex;
        vector<vector<int>> v;
        for (int i = 0; i <= m; i++)
        {
            vector<int> a(i + 1);
            v.push_back(a);
        }
        // generating the Pascal Triangle
        for (int i = 0; i <= m; i++)
        {
            for (int j = 0; j <= i; j++)
            {
                if (i == j || j == 0)
                    v[i][j] = 1;
                else
                    v[i][j] = v[i - 1][j] + v[i - 1][j - 1];
            }
        }
        vector<int> z;
        for (int j = 0; j < v[m].size(); j++)
        {
            z.push_back(v[m][j]);
        }
        return z;
    }
};

int main()
{
    cout << "Radhe_Radhe" << endl;

    int m = 3;
    vector<vector<int>> v;
    for (int i = 0; i < m; i++)
    {
        vector<int> a(i + 1);
        v.push_back(a);
    }
    // generating the Pascal Triangle
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (i == j || j == 0)
                v[i][j] = 1;
            else
                v[i][j] = v[i - 1][j] + v[i - 1][j - 1];
        }
    }
    // print
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
