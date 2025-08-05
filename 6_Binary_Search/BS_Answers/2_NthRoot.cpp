#include<bits/stdc++.h>
using namespace std;
long long power(int n,int x){
        long long res = 1;
        long long base = n;
        while(x>0){
            if(x%2==1)res = res*base;
            base = base*base;
            x = x/2;
        }
        return res;
    }
int nthRoot(int m, int n) {
    // Write your code here
    int low = 1,high = n;
        while(low<=high){
            int mid = low + ((high-low)>>1);
            if(power(mid,m) == n){
                return mid;
            }
            else if(power(mid,m)< n){
                low = mid + 1; 
            }
            else{
                high = mid - 1;
            }
        }
        return -1;
}

int main() {
    int n;
    double x;
    cin >> n >> x;
    cout << nthRoot(n, x) << endl;
    return 0;
}