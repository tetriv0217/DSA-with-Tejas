#include<bits/stdc++.h>
using namespace std;
void selectionSort(vector<int>&arr){
    int n = arr.size();
    for(int i = 0;i<n-1;i++){
        int mini = i;
        for(int j = i;j<=n-1;j++){
            if(arr[mini]>arr[j]){
                mini = j;
            }
        }
        swap(arr[mini],arr[i]);
    }
}
int main()
{
    int n;
    cin>>n;
    vector<int>arr;
    for(int i = 0;i<n;i++){
        int num;
        cin>>num;
        arr.emplace_back(num);
    }
    selectionSort(arr);
    for(auto &it : arr){
        cout<<it<<" ";
    }
    return 0;
}