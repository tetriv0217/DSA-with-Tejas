#include <iostream>
#include <vector>
using namespace std;

int firstOccurence(vector<int> &nums, int target, int n)
{
    int low = 0, high = n - 1, ans = -1;
    while (!(low > high))
    {
        int mid = low + ((high - low) >> 1);
        if (nums[mid] == target)
        {
            ans = mid;
            high = mid - 1;
        }
        else if (nums[mid] > target)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return ans;
}
int lastOccurence(vector<int> &nums, int target, int n)
{
    int low = 0, high = n - 1, ans = -1;
    while (!(low > high))
    {
        int mid = low + ((high - low) >> 1);
        if (nums[mid] == target)
        {
            ans = mid;
            low = mid + 1;
        }
        else if (nums[mid] > target)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return ans;
}
vector<int> searchRange(vector<int> &nums, int target)
{
    // Write your code here
    int n = nums.size();
    vector<int> ans = {-1, -1};
    if (n == 0 || (n == 1 && (nums[0] != target)))
    {
        return ans;
    }
    ans[0] = firstOccurence(nums, target, n);
    ans[1] = lastOccurence(nums, target, n);
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
    vector<int> result = searchRange(nums, target);
    cout << result[0] << " " << result[1] << endl;
    return 0;
}