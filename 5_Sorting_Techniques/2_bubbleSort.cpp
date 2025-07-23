#include<bits/stdc++.h>
using namespace std;
void bubbleSort(vector<int>&arr){
    int n = arr.size();
    bool flag = false;
    for(int i = n-1;i>0;i--){
        for(int j = 0;j<i;j++){
            if(arr[j+1] < arr[j]){
                swap(arr[j+1],arr[j]);
                flag = true;
            }
        }
        if(!flag){
            break;
        }
        cout<<"runs"<<endl;
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
    bubbleSort(arr);
    for(auto &it : arr){
        cout<<it<<" ";
    }
    return 0;
}