#include <bits/stdc++.h>
using namespace std;

bool f(vector<int> &weights, int days, int capacity)
{
    int cnt = 0, numDays = 0;
    for (auto &it : weights)
    {
        if (cnt + it > capacity)
        {
            numDays++;
            cnt = it;
        }

        else
        {
            cnt += it;
        }
    }
    return (numDays + 1) <= days;
}
int shipWithinDays(vector<int> &weights, int days)
{
    int low = INT_MIN, high = 0, ans = -1;
    for (auto &it : weights)
    {
        low = max(low, it);
        high += it;
    }
    while (low <= high)
    {
        int mid = low + ((high - low) >> 1);
        if (f(weights, days, mid))
        {
            ans = mid;
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
    int n, days;
    cin >> n >> days;
    vector<int> weights(n);
    for (int i = 0; i < n; i++)
        cin >> weights[i];
    cout << shipWithinDays(weights, days) << endl;
    return 0;
}