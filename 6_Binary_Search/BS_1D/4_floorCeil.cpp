#include <iostream>
#include <vector>
using namespace std;

// Floor :- Largest number <= target
int floorOfVector(vector<int>& arr, int target) {
    // Write your code here
    int n = arr.size();
    int ans = -1, low = 0, high = n - 1;
    while (!(low > high))
    {
        int mid = low + ((high - low) >> 1);
        if (arr[mid] <= target)
        {
            ans = arr[mid];
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return ans;
}
// Ceil :- Smallest number >= target

int ceilOfVector(vector<int>& arr, int target) {
    // Write your code here
    int n = arr.size();
    int ans = -1, low = 0, high = n - 1;
    while (!(low > high))
    {
        int mid = low + ((high - low) >> 1);
        if (arr[mid] >= target)
        {
            ans = arr[mid];
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return ans;
    
}

int main() {
    int n, x;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];
    cin >> x;
    cout << floorOfVector(arr, x) << endl;
    cout << ceilOfVector(arr, x) << endl;
    return 0;
}