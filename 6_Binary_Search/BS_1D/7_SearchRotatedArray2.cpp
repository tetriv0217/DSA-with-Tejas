#include <iostream>
#include <vector>
using namespace std;

bool search(vector<int>& nums, int target) {
    // Write your code here
    int n = nums.size();
        int low = 0,high = n-1;
        while(low<=high){
            int mid = (low+high)>>1;
            if(nums[mid] == target){
                return true;
            }
            else if (nums[low] == nums[mid] && nums[high] == nums[mid]) {
                low+=1;
                high-=1;
                continue;
            }
            // right half sorted
            else if(nums[low] <= nums[mid]){
                if(target <= nums[mid] && target >= nums[low] ){
                    high =mid-1;
                }
                else{
                    low = mid+1;
                }
            }
            else{
                if(target >= nums[mid] && target <= nums[high]){
                    low = mid+1;
                }
                else{
                    high = mid - 1;
                }
            }
        }
        return false;
}

int main() {
    int n, target;
    cin >> n;
    vector<int> nums(n);
    for(int i = 0; i < n; i++) cin >> nums[i];
    cin >> target;
    cout << (search(nums, target) ? "true" : "false") << endl;
    return 0;
}