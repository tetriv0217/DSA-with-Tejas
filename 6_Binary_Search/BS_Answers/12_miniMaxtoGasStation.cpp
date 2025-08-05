#include <bits/stdc++.h>
using namespace std;
// Heap Solution 
// double findSmallestMaxDist(vector<int> &arr, int k) {
//         // Code here
//         int n = arr.size();
//         vector<int>howMany(n-1,0);
//         priority_queue<pair<long double,int>>pq;
//         for(int i = 0;i<n-1;i++){
//             pq.push({(arr[i+1]-arr[i]),i});
//         }
//         for(int i = 1;i<=k;i++){
//             auto it = pq.top();
//             pq.pop();
//             int section = it.second;
//             howMany[section]++;
//             long double initialSD = arr[section+1]-arr[section];
//             long double secDiv = (double)initialSD/((long double)(howMany[section]+1));
//             pq.push({secDiv,section});
//         }
//         return round(pq.top().first * 100.0) / 100.0;
//     }

//Binary Search
int numGasStations(vector<int> &arr, double k)
{
    int cnt = 0;
    for (int i = 0; i < arr.size() - 1; i++)
    {
        int num = ((arr[i + 1] - arr[i]) / k);
        if (((arr[i + 1] - arr[i]) / k) == num * k)
        {
            num--;
        }
        cnt += num;
    }
    return cnt;
}
double findSmallestMaxDist(vector<int> &arr, int k)
{
    // Code here
    int n = arr.size();
    double high = -1.00, low = 0.00;
    for (int i = 0; i < n - 1; i++)
    {
        high = max(high, double(arr[i + 1] - arr[i]));
    }
    double diff = 1e-6;
    while (high - low > diff)
    {
        double mid = (low + high) / 2.0;
        int cnt = numGasStations(arr, mid);
        if (cnt > k)
        {
            low = mid;
        }
        else
        {
            high = mid;
        }
    }
    return high;
}

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> stations(n);
    for (int i = 0; i < n; i++)
        cin >> stations[i];
    cout << findSmallestMaxDist(stations, k) << endl;
    return 0;
}