#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    char a = 'A';
    for(int i = 1;i<n+1;i++){
        for(int j = 1;j<=i;j++){
            cout<<a;
        }
        a++;
        cout<<endl;
    }
    return 0;
}