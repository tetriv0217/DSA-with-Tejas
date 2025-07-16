#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1, 2, 4, 5, 6, 7, 2, 3, 2, 3, 7};
    int n = 11;
    int hash[8] = {0};
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]]++;
    }
  
    for (int i = 0; i < 4; i++)
    {
        int nums;
        cin >> nums;
        if(nums>8){
            cout<<0<<endl;
        }
        else
        cout<<"No. of "<<nums<<"-"<<hash[nums]<<endl;
    }
    return 0;
}