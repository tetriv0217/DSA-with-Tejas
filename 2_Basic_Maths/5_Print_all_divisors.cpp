#include<bits/stdc++.h>
using namespace std;
void print_divisors(int n) {
        // Code here.
        set<int>ans;
        for(int i = 1;i*i<=n;i++){
            if(n%i== 0){
                ans.insert(i);
                if(n/i != i){
                    ans.insert(n/i);
                }
            }
        }
        for(auto& it: ans){
            cout<<it<<" ";
        }
    }
int main()
{
    int n;
    cin>>n;
    print_divisors(n);
    return 0;
}