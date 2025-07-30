#include <iostream>
#include <vector>
using namespace std;

int singleNonDuplicate(vector<int> &nums)
{
    // Write your code here
    int n = nums.size();
    // To reduce base cases in while loop
    if (n == 1)
        return nums[0];
    if (nums[0] != nums[1])
        return nums[0];
    if (nums[n - 2] != nums[n - 1])
        return nums[n - 1];
    int low = 1, high = n - 2;
    while (low <= high)
    {
        int mid = low + ((high - low) >> 1);
        if ((nums[mid] != nums[mid - 1]) && nums[mid] != nums[mid + 1])
        {
            return nums[mid];
        }
        //(odd,even) --> left side has the answer
        if (((mid % 2 == 1) && (nums[mid] == nums[mid + 1])) ||
            ((mid % 2 == 0) && (nums[mid] == nums[mid - 1])))
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
        cin >> nums[i];
    cout << singleNonDuplicate(nums) << endl;
    return 0;
}