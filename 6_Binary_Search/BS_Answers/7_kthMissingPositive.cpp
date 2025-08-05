#include <bits/stdc++.h>
using namespace std;

int findKthPositive(vector<int> &arr, int k)
{
    int n = arr.size();
    int low = 0, high = n - 1;
    if (arr[low] > k)
    {
        return k;
    }
    while (low <= high)
    {
        int mid = low + ((high - low) >> 1);
        int missing = arr[mid] - (mid + 1);
        if (missing < k)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return high + 1 + k;
}

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << findKthPositive(arr, k) << endl;
    return 0;
}