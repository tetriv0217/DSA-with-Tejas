#include <bits/stdc++.h>
using namespace std;

int lesserEquals(vector<vector<int>> &mat, int n, int mid)
{
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        cnt = cnt + (upper_bound(mat[i].begin(), mat[i].end(), mid) - mat[i].begin());
    }
    return cnt;
}
int median(vector<vector<int>> &mat)
{
    // code here
    int n = mat.size(), m = mat[0].size();
    int low = INT_MAX, high = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        low = min(low, mat[i][0]);
        high = max(high, mat[i][m - 1]);
    }
    int med = (n * m) / 2;
    while (low <= high)
    {
        int mid = low + ((high - low) >> 1);
        if (lesserEquals(mat, n, mid) <= med)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return low;
}

int main()
{
    int r, c;
    cin >> r >> c;
    vector<vector<int>> matrix(r, vector<int>(c));
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> matrix[i][j];
        }
    }
    cout << median(matrix) << endl;
    return 0;
}