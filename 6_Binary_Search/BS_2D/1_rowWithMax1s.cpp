#include<bits/stdc++.h>
using namespace std;

int rowWithMax1s(vector<vector<int>>& matrix) {
    // Write your code here
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> matrix(n, vector<int>(m));
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            cin >> matrix[i][j];
    cout << rowWithMax1s(matrix) << endl;
    return 0;
}