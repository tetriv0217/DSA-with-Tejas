#include <bits/stdc++.h>
using namespace std;

int maxi(vector<vector<int>> &mat, int n, int m, int col)
{
    int maxi = INT_MIN;
    int maxInd = 0;
    for (int i = 0; i < n; i++)
    {
        if (maxi < mat[i][col])
        {
            maxi = mat[i][col];
            maxInd = i;
        }
    }
    return maxInd;
}
vector<int> findPeakGrid(vector<vector<int>> &mat)
{
    int n = mat.size(), m = mat[0].size();
    int low = 0, high = m - 1;
    while (low <= high)
    {
        int mid = low + ((high - low) >> 1);
        int row = maxi(mat, n, m, mid);
        int left = (mid - 1 >= 0) ? mat[row][mid - 1] : -1;
        int right = (mid + 1 < m) ? mat[row][mid + 1] : -1;
        if (mat[row][mid] > left && mat[row][mid] > right)
        {
            return {row, mid};
        }
        else if (mat[row][mid] < left)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return {-1, -1};
}

int main()
{
    int m, n;
    cin >> m >> n;
    vector<vector<int>> mat(m, vector<int>(n));
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> mat[i][j];
    vector<int> res = findPeakGrid(mat);
    cout << res[0] << " " << res[1] << endl;
    return 0;
}