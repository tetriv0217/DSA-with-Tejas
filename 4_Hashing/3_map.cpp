#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    map<int,int>mpp;
    for(int i = 0;i<n;i++){
        int n;
        cin>>n;
        mpp[n]++;
    }
    for(auto& it: mpp){
        cout<<it.first<<" - "<<it.second<<endl;
    }
    return 0;
}