#include <bits/stdc++.h>
using namespace std;

bool f(vector<int> &bloomDay, int m, int k, int mid)
{
    int cnt = 0, bqMade = 0;
    for (auto &it : bloomDay)
    {
        if (it <= mid)
        {
            cnt++;
        }
        else
        {
            bqMade += (cnt / k);
            cnt = 0;
        }
    }
    bqMade += (cnt / k);

    return (bqMade >= m) ? true : false;
}
int minDays(vector<int> &bloomDay, int m, int k)
{
    int n = bloomDay.size();
    if (1LL * m * k > (long long)(n))
    {
        return -1;
    }
    int low = *min_element(bloomDay.begin(), bloomDay.end()), high = *max_element(bloomDay.begin(), bloomDay.end());
    int ans = -1;
    if (high < k)
    {
        return -1;
    }
    while (low <= high)
    {
        long long mid = low + ((high - low) >> 1);
        if (f(bloomDay, m, k, mid))
        { // true if bouquets can be made
            ans = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    return (ans == -1) ? -1 : ans;
}

int main()
{
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> bloomDay(n);
    for (int i = 0; i < n; i++)
        cin >> bloomDay[i];
    cout << minDays(bloomDay, m, k) << endl;
    return 0;
}