#include<bits/stdc++.h>
using namespace std;
void merge(vector<int>&arr,int low,int mid,int high){
    vector<int>temp;
    int left = low,right = mid+1;
    while(left<=mid && right <= high){
        if(arr[left]<arr[right]){
            temp.push_back(arr[left]);
            left+=1;
        }
        else{
            temp.push_back(arr[right]);
            right+=1;
        }
    }
    while(left<=mid){
        temp.push_back(arr[left]);
        left++;
    }
    while(right<=high){
        temp.push_back(arr[right]);
        right++;
    }
    for(int i = low;i<=high;i++){
        arr[i] = temp[i-low];
    }
}
void merger(vector<int>&arr,int low,int high){
    if(low >= high){
        return;
    }
    int mid = (low+high)>>1;
    merger(arr,low,mid);
    merger(arr,mid+1,high);
    merge(arr,low,mid,high);
}
void mergeSort(vector<int>&arr){
    int n = arr.size();
    merger(arr,0,n-1);
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
    mergeSort(arr);
    for(auto &it : arr){
        cout<<it<<" ";
    }
    return 0;
}