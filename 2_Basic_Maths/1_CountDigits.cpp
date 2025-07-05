#include<bits/stdc++.h>
using namespace std;
int countDigits(int n) {
        // code here
        return floor(log10(n))+1;
}
int main()
{
    int n;
    cin>>n;
    int ans = countDigits(n);
    cout<<"No of digits in "<<n<<" are: "<<ans;

    return 0;
}