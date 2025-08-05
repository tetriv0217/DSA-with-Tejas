#include<bits/stdc++.h>
using namespace std;


    bool possible(vector<int> &stalls, int k,int capacity) {
        int n = stalls.size();
        int cows = 1,last = stalls[0];
        for(int i = 1;i<n;i++){
            if(stalls[i] - last >= capacity){
                last = stalls[i];
                cows++;
            }
        }
        return cows >= k;
    }
    int aggressiveCows(vector<int> &stalls, int k) {
        // code here
        int n = stalls.size();
        sort(stalls.begin(),stalls.end());
        int low = 1,high = stalls[n-1];
        if(k == 2){
            return stalls[n-1] - stalls[0];
        }
        while(low <= high){
            int mid = low + ((high - low)>>1);
            if(possible(stalls,k,mid)){
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }
        return high;
        
    }


int main() {
    int n, cows;
    cin >> n >> cows;
    vector<int> stalls(n);
    for(int i = 0; i < n; i++) cin >> stalls[i];
    cout << aggressiveCows(stalls, cows) << endl;
    return 0;
}