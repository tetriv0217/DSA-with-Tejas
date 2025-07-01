#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i = 1;i<=n;i++){
        int flag = (i%2==1)?1:0;
        for(int j = 0;j<i;j++){
            cout<<flag;
            flag = (flag == 0)?1:0;
        }
        cout<<endl;
    }
    return 0;
}