#include<bits/stdc++.h>
using namespace std;

int findMedian(vector<vector<int>>& matrix) {
    // Write your code here
}

int main() {
    int r, c;
    cin >> r >> c;
    vector<vector<int>> matrix(r, vector<int>(c));
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            cin >> matrix[i][j];
        }
    }
    cout << findMedian(matrix) << endl;
    return 0;
}