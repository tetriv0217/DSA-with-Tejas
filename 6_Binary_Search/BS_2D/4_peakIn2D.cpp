#include<bits/stdc++.h>
using namespace std;

vector<int> findPeakGrid(vector<vector<int>>& mat) {
    // Write your code here
}

int main() {
    int m, n;
    cin >> m >> n;
    vector<vector<int>> mat(m, vector<int>(n));
    for(int i = 0; i < m; i++)
        for(int j = 0; j < n; j++)
            cin >> mat[i][j];
    vector<int> res = findPeakGrid(mat);
    cout << res[0] << " " << res[1] << endl;
    return 0;
}