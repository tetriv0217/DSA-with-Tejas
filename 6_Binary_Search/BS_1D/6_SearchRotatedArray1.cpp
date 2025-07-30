#include <iostream>
#include <vector>
using namespace std;

int searchRotatedArray(vector<int>& nums, int target) {
    // Write your code here
    int n = nums.size();
        int low = 0,high = n-1;
        while(low<=high){
            int mid = low+((high-low)>>1);
            if(nums[mid] == target){
                return mid;
            }
            // right half sorted
            else if(nums[mid] < nums[high]){
                if(target > nums[mid] && target <= nums[high]){
                    low = mid+1;
                }
                else{
                    high = mid - 1;
                }
            }
            else{
                if(target < nums[mid] && target >= nums[low] ){
                    high =mid-1;
                }
                else{
                    low = mid+1;
                }
            }
        }
        return -1;
}

int main() {
    int n, target;
    cin >> n;
    vector<int> nums(n);
    for(int i = 0; i < n; i++) cin >> nums[i];
    cin >> target;
    cout << searchRotatedArray(nums, target) << endl;
    return 0;
}