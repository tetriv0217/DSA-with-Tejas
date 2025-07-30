#include <iostream>
#include <vector>
using namespace std;

// Function to find the lower bound index of target in a sorted array
int lower_bound_index(vector<int> &arr, int target)
{
    // Write your code here
    int n = arr.size();
    int ans = n, low = 0, high = n - 1;
    while (!(low > high))
    {
        int mid = low + ((high - low) >> 1);
        if (arr[mid] >= target)
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
int upper_bound_index(vector<int> &arr, int target)
{
    // Write your code here
    int n = arr.size();
    int ans = n, low = 0, high = n - 1;
    while (!(low > high))
    {
        int mid = low + ((high - low) >> 1);
        if (arr[mid] > target)// for upper bound the equal to sign changes
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
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cin >> target;
    cout << lower_bound_index(arr, target) << endl;
    cout << upper_bound_index(arr, target) << endl;
    
    
    cout << lower_bound(arr.begin(),arr.end(),target) - arr.begin();//STL function for lower bound.
    return 0;
}
