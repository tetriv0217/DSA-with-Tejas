#include <bits/stdc++.h>
using namespace std;

int costOfk(vector<int> &piles, int h, int k)
{
    int n = piles.size();
    int ans = 0, i = 0;
    while (i < n)
    {
        ans = ans + ceil(double(piles[i]) / k);
        if (ans > h)
        {
            return -1;
        }
        i++;
    }
    return 1;
}
int minEatingSpeed(vector<int> &piles, int h)
{
    int n = piles.size();
    int low = 1, high = *max_element(piles.begin(), piles.end());
    while (low <= high)
    {
        int mid = low + ((high - low) >> 1);
        if (costOfk(piles, h, mid) == 1)
        { // == 1 means <= h

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
    int n, h;
    cin >> n >> h;
    vector<int> piles(n);
    for (int i = 0; i < n; i++)
        cin >> piles[i];
    cout << minEatingSpeed(piles, h) << endl;
    return 0;
}