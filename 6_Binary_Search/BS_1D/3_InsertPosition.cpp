#include <iostream>
#include <vector>
using namespace std;

int searchInsertPosition(vector<int> &nums, int target)
{
    // Write your code here
    int n = nums.size();
    int ans = n, low = 0, high = n - 1;
    while (!(low > high))
    {
        int mid = (low + high) >> 1;
        if (nums[mid] >= target)
        {
            ans = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return ans;
}

int main()
{
    int n, target;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
        cin >> nums[i];
    cin >> target;
    cout << searchInsertPosition(nums, target) << endl;
    return 0;
}