#include<bits/stdc++.h>
using namespace std;


int countRotations(vector<int>& nums) {
    // Write your code here
    int n = nums.size();
    int low = 0, high = n - 1, ans = INT_MAX;
    int ind = -1;
    while (low <= high)
    {
        int mid = low + ((high - low) >> 1);
        // identify the sorted half
        if (nums[low] <= nums[high])
        {
            if(nums[low] < ans){
                ind = low;
                ans = nums[low];
            }
            break;
        }
        // left half sorted
        if (nums[low] <= nums[mid])
        {
            if(nums[low]<ans){
                ind = low;
                ans = nums[low];
            }
            low = mid + 1;
        }
        // right half sorted
        else
        {
            high = mid - 1;
            if(nums[mid]<ans){
                ind = mid;
                ans = nums[mid];
            }
            
        }
    }
    return ind; 
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];
    cout << countRotations(arr) << endl;
    return 0;
}