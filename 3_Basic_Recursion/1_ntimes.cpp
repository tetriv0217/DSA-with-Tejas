#include<bits/stdc++.h>
using namespace std;
void printN(string str,int n){
    if(n == 0)
        return;
    cout<<str<<endl;
    printN(str,n-1);
}
int main()
{
    int n;
    string str;
    cin>>str>>n;
    printN(str,n);
    return 0;
}