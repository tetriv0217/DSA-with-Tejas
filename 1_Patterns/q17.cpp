#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int i = 1;i<n+1;i++){
        for(int j = 0;j<n-i;j++){
            cout<<"_";
        }
        for(char a = 'A';a<='A'+i-1;a++){
            cout<<a;
        }
        for(char a = 'A'+i-2;a>='A';a--){
            cout<<a;
        }
        cout<<endl;
    }
    return 0;
}