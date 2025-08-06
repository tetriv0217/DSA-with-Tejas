#include <bits/stdc++.h>
using namespace std;

int rowWithMax1s(vector<vector<int>> &arr)
{
    // Write your code here
    int n = arr[0].size();
    int maxi = -1;
    int ans = -1;
    int i = 0;
    for (auto it : arr)
    {
        int ind = upper_bound(it.begin(), it.end(), 0) - it.begin();
        if (ind <= n - 1)
        {
            if (n - ind > maxi)
            {
                maxi = n - ind;
                ans = i;
            }
        }
        i++;
    }
    return ans;
}

int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> matrix(n, vector<int>(m));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> matrix[i][j];
    cout << rowWithMax1s(matrix) << endl;
    return 0;
}