#include <bits/stdc++.h>
using namespace std;

int findMin(vector<int> &nums)
{
    // Write your code here
    int n = nums.size();
    int low = 0, high = n - 1, ans = INT_MAX;
    while (low <= high)
    {
        int mid = low + ((high - low) >> 1);
        // identify the sorted half
        // left half sorted
        if (nums[low] <= nums[high])
        {
            ans = min(ans, nums[low]);
            break;
        }
        if (nums[low] <= nums[mid])
        {
            ans = min(ans, nums[low]);
            low = mid + 1;
        }
        // right half sorted
        else
        {
            ans = min(ans, nums[mid]);
            high = mid - 1;
        }
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
        cin >> nums[i];
    cout << findMin(nums) << endl;
    return 0;
}