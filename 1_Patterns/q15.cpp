#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i = 1;i<n+1;i++){
        for(char j = 'A';j<'A'+(n-i+1);j++){
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}