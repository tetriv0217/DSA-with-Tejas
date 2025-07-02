#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i = 0;i<n;i++){
        for(char c = 'A' + n-i-1;c<'A'+n;c++){
            cout<<c;
        }
        cout<<endl;
    }
    return 0;
}