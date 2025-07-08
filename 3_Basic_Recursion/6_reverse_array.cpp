#include<bits/stdc++.h>
using namespace std;
void reverse(int arr[],int start,int end){
    if(start>=end)
    return;
    arr[start] = arr[start] xor arr[end];
    arr[end] = arr[start] xor arr[end];
    arr[start] = arr[start] xor arr[end];

    reverse(arr,start+1,end-1);
}
int main()
{
    int arr[] = {1,2,3,4,5};
    reverse(arr,0,4);
    for(auto &val : arr){
        cout<<val<<" ";
    } 
    return 0;
}