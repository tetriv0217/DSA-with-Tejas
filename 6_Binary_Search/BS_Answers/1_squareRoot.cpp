#include<bits/stdc++.h>
using namespace std;

int squareRoot(int n) {
    // Write your code here
    if(n == 1)
        return 1;
        int low = 1,high = n/2;
        while(low<=high){
            int mid = low + ((high-low)>>1);
            if(mid*mid <= n){
                low = mid + 1;
            }
            else{
                high = mid-1;
            }
        }
        return high;
}

int main() {
    int n;
    cin >> n;
    cout << squareRoot(n) << endl;
    return 0;
}