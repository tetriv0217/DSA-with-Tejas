#include <bits/stdc++.h>
using namespace std;

int kthElement(vector<int> &nums1, vector<int> &nums2, int k)
{
    // code here
    int n1 = nums1.size();
    int n2 = nums2.size();
    if (n2 < n1)
    {
        return kthElement(nums2, nums1, k);
    }
    int n = (n1 + n2 + 1) / 2;
    int left = k;
    int low = max(k - n2, 0), high = min(k, n1);
    while (low <= high)
    {
        int mid1 = low + ((high - low) >> 1);
        int l1 = INT_MIN, l2 = INT_MIN;
        int r1 = INT_MAX, r2 = INT_MAX;
        int mid2 = left - mid1;
        if (mid1 < n1)
        {
            r1 = nums1[mid1];
        }
        if (mid2 < n2)
        {
            r2 = nums2[mid2];
        }
        if (mid1 - 1 >= 0)
        {
            l1 = nums1[mid1 - 1];
        }
        if (mid2 - 1 >= 0)
        {
            l2 = nums2[mid2 - 1];
        }
        if (l1 <= r2 && l2 <= r1)
        {
            return max(l1, l2);
        }
        if (l1 > r2)
        {
            high = mid1 - 1;
        }
        else
        {
            low = mid1 + 1;
        }
    }
    return 0;
}

int main()
{
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> nums1(n), nums2(m);
    for (int i = 0; i < n; i++)
        cin >> nums1[i];
    for (int i = 0; i < m; i++)
        cin >> nums2[i];
    cout << kthElement(nums1, nums2, k) << endl;
    return 0;
}