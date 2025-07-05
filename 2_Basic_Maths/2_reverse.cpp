#include<bits/stdc++.h>
using namespace std;

int reverse(int x) {
    int n = x;
        
        
    int reverse = 0;
    while(n!=0){
        int mod = n%10;
        if ((reverse > INT_MAX / 10) || (reverse < INT_MIN / 10)) {
            return 0; // Return 0 if reversing x would cause overflow/underflow
        }
        reverse = reverse*10 + mod;
        n/=10;
    }
    return reverse;
}

int main()
{
    int n;
    cin>>n;
    cout<<reverse(n)<<endl;
    return 0;
}