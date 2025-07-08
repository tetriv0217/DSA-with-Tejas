#include<bits/stdc++.h>
using namespace std;
int sumOf1toN(int n){
    if(n == 0)
        return 0;
    return n+sumOf1toN(n-1);
}
int main()
{
    int n;
    cin>>n;
    cout<<"Sum of first n numbers :- "<<sumOf1toN(n);
    return 0;
}