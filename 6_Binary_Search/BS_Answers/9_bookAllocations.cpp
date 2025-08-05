#include<bits/stdc++.h>
using namespace std;

int possible(vector<int> &arr, int k, int pages) {
        int cnt = 0,books = 1;
        for(auto &it : arr){
            cnt+=it;
            if(cnt>pages){
                books++;
                cnt = it;
            }
            
        }
        return books <= k; 
        
    }
    int findPages(vector<int> &arr, int k) {
        // code here
        int n = arr.size();
        if(k > n){
            return -1;
        }
        int low = INT_MIN;
        int high = 0;
        for(int i = 0;i<n;i++){
            high += arr[i];
            low = max(low,arr[i]);
        }
        while(low<=high){
            int mid = low + ((high-low)>>1);
            if(possible(arr,k,mid)){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return low;
    }

int main() {
    int n, students;
    cin >> n >> students;
    vector<int> books(n);
    for(int i = 0; i < n; i++) cin >> books[i];
    cout << findPages(books, students) << endl;
    return 0;
}