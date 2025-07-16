#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin>>str;
    int hash[256] = {0};
    for(int i = 0;i<str.size();i++){
        hash[str[i]]++;
    }
    int n;
    cin>>n;
    
    for(int i = 0;i<n;i++){
        char c;
        cin>>c;
        cout<<hash[c]<<endl;
    }
    return 0;
}