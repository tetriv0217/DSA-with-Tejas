#include <bits/stdc++.h>
using namespace std;

bool f(vector<int> &nums, int threshold, int mid)
{
    int ans = 0;
    for (auto &it : nums)
    {
        ans = ans + ceil((double)(it) / mid);
    }
    return ans <= threshold;
}
int smallestDivisor(vector<int> &nums, int threshold)
{
    int low = 1, high = *max_element(nums.begin(), nums.end());
    while (low <= high)
    {
        int mid = low + ((high - low) >> 1);
        if (f(nums, threshold, mid))
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
    int n, threshold;
    cin >> n >> threshold;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
        cin >> nums[i];
    cout << smallestDivisor(nums, threshold) << endl;
    return 0;
}