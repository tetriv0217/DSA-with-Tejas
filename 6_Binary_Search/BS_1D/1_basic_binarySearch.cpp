#include<bits/stdc++.h>
using namespace std;

// Function prototype (implement logic yourself)
int binarySearchFunction(const vector<int>& nums, int target){
    int n = nums.size();
        if(nums[0] > target || nums[n-1]<target){
            return -1;
        }
        int low = 0,high = n-1;
        while(low <= high){
            int mid = low + ((high-low) >> 1);
            if(nums[mid] == target){
                return mid;
            }
            else if(nums[mid] > target){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return -1;
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter array elements: ";
    for(int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int target;
    cout << "Enter target value: ";
    cin >> target;

    // Call your function here
    
    cout<<"Position :- "<<binarySearchFunction(arr, target);
    return 0;
}