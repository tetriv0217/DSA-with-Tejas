#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int start = 1;
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=i;j++){
            cout<<start++<<" ";
        }
        cout<<endl;
    }
    return 0;
}