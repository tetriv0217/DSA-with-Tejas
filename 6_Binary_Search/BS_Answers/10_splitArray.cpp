#include <bits/stdc++.h>
using namespace std;

bool possible(vector<int> &nums, int k, int sumSubArray)
{
    int sum = 0, subarrays = 1;
    for (auto &it : nums)
    {
        sum += it;
        if (sum > sumSubArray)
        {
            sum = it;
            subarrays++;
        }
    }
    return subarrays <= k;
}
int splitArray(vector<int> &nums, int k)
{
    int n = nums.size();
    int low = *max_element(nums.begin(), nums.end());
    int high = accumulate(nums.begin(), nums.end(), 0);
    while (low <= high)
    {
        int mid = low + ((high - low) >> 1);
        if (possible(nums, k, mid))
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
    int n, m;
    cin >> n >> m;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
        cin >> nums[i];
    cout << splitArray(nums, m) << endl;
    return 0;
}