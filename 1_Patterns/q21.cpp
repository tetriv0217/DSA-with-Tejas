#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i = 1;i<=n;i++){
        if(i == 1 || i == n){
            for(int j = 0;j<n;j++){
                cout<<"*";
            }
        }
        else{
            cout<<"*";
            for(int j = 0;j<n-2;j++){
                cout<<" ";
            }
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}