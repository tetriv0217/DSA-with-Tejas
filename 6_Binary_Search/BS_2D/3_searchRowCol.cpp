#include<bits/stdc++.h>
using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target) {
    // Write your code here
}

int main() {
    int n, m, target;
    cin >> n >> m;
    vector<vector<int>> matrix(n, vector<int>(m));
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            cin >> matrix[i][j];
    cin >> target;
    cout << (searchMatrix(matrix, target) ? "Found" : "Not Found") << endl;
    return 0;
}