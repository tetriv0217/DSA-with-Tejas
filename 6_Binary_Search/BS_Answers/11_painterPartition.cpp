#include <bits/stdc++.h>
using namespace std;

int possible(vector<int> &arr, int k, int mid)
{
    int cnt = 0, part = 1;
    for (auto &it : arr)
    {
        cnt += it;
        if (cnt > mid)
        {
            part++;
            cnt = it;
        }
    }
    return part <= k;
}
int minTime(vector<int> &arr, int k)
{
    // code here
    int low = INT_MIN, sum = 0;
    for (auto &it : arr)
    {
        low = max(low, it);
        sum += it;
    }
    if (k == 1)
    {
        return sum;
    }
    int high = sum;

    while (low <= high)
    {
        int mid = low + ((high - low) >> 1);
        if (possible(arr, k, mid))
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return low;
}

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << minTime(arr, k) << endl;
    return 0;
}