#include<bits/stdc++.h>
using namespace std;

int isPrime(int n){
    if(n == 1)
        return false;
    for(int i = 2;i*i<=n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main()
{
    int n;
    cin>>n;
    cout<<isPrime(n)<<endl;
    return 0;
}