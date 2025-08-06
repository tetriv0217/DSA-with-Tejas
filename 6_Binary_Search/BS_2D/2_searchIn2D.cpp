#include <bits/stdc++.h>
using namespace std;

bool searchMatrix(vector<vector<int>> &matrix, int target)
{
    // Write your code here
    int rows = matrix.size(), cols = matrix[0].size();
    int n = rows * cols;
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = low + ((high - low) >> 1);
        int row = mid / cols;
        int col = mid % cols;
        if (matrix[row][col] == target)
        {
            return true;
        }
        else if (matrix[row][col] > target)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return false;
}

int main()
{
    int rows, cols, target;
    cin >> rows >> cols;
    vector<vector<int>> matrix(rows, vector<int>(cols));
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            cin >> matrix[i][j];
    cin >> target;
    cout << searchMatrix(matrix, target) << endl;
    return 0;
}