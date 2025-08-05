#include<bits/stdc++.h>
using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target) {
    // Write your code here
}

int main() {
    int rows, cols, target;
    cin >> rows >> cols;
    vector<vector<int>> matrix(rows, vector<int>(cols));
    for(int i = 0; i < rows; i++)
        for(int j = 0; j < cols; j++)
            cin >> matrix[i][j];
    cin >> target;
    cout << searchMatrix(matrix, target) << endl;
    return 0;
}