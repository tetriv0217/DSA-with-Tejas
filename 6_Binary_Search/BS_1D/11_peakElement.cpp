#include <iostream>
#include <vector>
using namespace std;

int findPeakElement(vector<int>& nums) {
    // Write your code here
    int n = nums.size();
        if(n == 1)
            return 0;
        if(nums[0] > nums[1])
            return 0; 
        if(nums[n-1] > nums[n-2])
            return n-1;
        int low = 1,high = n-2;
        while(low <= high){
            int mid = low + ((high-low)>>1);
            if((nums[mid]>nums[mid-1] ) && (nums[mid]>nums[mid+1])){
                return mid;
            }
            // increasing curve :- move low to mid + 1
            if(nums[mid-1]<nums[mid] && nums[mid]<nums[mid+1]){
                low = mid+1;
            }
            else{
                high = mid - 1;
            }
        }
        return -1;
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i = 0; i < n; i++) cin >> nums[i];
    cout << findPeakElement(nums) << endl;
    return 0;
}