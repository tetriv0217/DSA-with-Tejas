#include<bits/stdc++.h>
using namespace std;
int partition(vector<int>&arr,int low ,int high){
    int pivot = arr[low];
    int i = low,j = high;
    while(i<j){
        while(arr[i]<= pivot && i <= high-1){
            i++;
        }
        while(arr[j] > pivot && j >= low + 1){
            j--;
        }
        if(i<j){
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[low],arr[j]);
    return j;
}
void qs(vector<int>&arr,int low,int high){
    if(low<high){
        int partitionIndex = partition(arr,low,high);
        qs(arr,low,partitionIndex-1);
        qs(arr,partitionIndex+1,high);

    }
    return;
}
void quickSort(vector<int>&arr){
    int n = arr.size();
    qs(arr,0,n-1);
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
    quickSort(arr);
    for(auto &it : arr){
        cout<<it<<" ";
    }
    return 0;
}