#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next, *prev;
    Node(int val) : data(val), next(NULL), prev(NULL)
    {
    }
};


class Solution {
  public:
    vector<pair<int, int>> findPairsWithGivenSum(Node *head, int target) {
        // code here
        vector<pair<int,int>>ans;
        Node* tail = head;
        Node* original = head;
        while(tail->next!=nullptr){
            tail = tail->next;
        }
        while(head->data < tail->data){
            int sum = head->data+tail->data;
            if(sum == target){
                ans.push_back({head->data,tail->data});
                head = head->next;
                tail = tail->prev;
            }
            else if(sum>target){
                tail = tail->prev;
            }
            else{
                head = head->next;
            }
        }
        return ans;
    }
};
int main()
{
    
    return 0;
}