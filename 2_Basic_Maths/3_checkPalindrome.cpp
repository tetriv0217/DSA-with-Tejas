#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(int x)
{
    if (x == 0)
        return true;
    if (x < 0 || x % 10 == 0)
        return false;
    int n = x;
    int res = 0;
    while (n != 0)
    {
        int mod = n % 10;
        if (res > INT_MAX / 10)
            return false;
        res = res * 10 + mod;
        n /= 10;
    }
    return (int)res == x;
}

int main()
{
    int n;
    cin >> n;
    cout<<isPalindrome(n)<<endl;
    return 0;
}