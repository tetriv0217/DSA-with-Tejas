#include<bits/stdc++.h>
using namespace std;
void insertionSort(vector<int>&arr){
    int n = arr.size();
    for(int i = 1;i<n;i++){
        for(int j = i;j>0;j--){
            if(arr[j]<arr[j-1]){
                swap(arr[j],arr[j-1]);
            }
            else{
                break;
            }
        }
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
    insertionSort(arr);
    for(auto &it : arr){
        cout<<it<<" ";
    }
    return 0;
}