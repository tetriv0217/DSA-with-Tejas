#include<bits/stdc++.h>
using namespace std;


class Node {
public:
    int data;
    Node* next;

    // Default constructor
    Node()
    {
        data = 0;
        next = NULL;
    }

    // Parameterised Constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};


class Solution {
  public:
    Node* constructLL(vector<int>& arr) {
        // code here
        Node* head = new Node(arr[0]);
        Node* mover = head;
        int n = arr.size();
        if(n == 1){
            return head;
        }
        for(int i = 1;i<n;i++){
            Node* temp = new Node(arr[i]);
            mover->next = temp;
            mover = mover->next;
        }
        return head;
    }
    vector<int> printList(Node *head) {
        // code here
        vector<int>ans;
        Node* temp = head;
        while(temp != nullptr){
            ans.emplace_back(temp->data);
            temp = temp->next;
        }
        return ans;
    }
    bool searchKey(int n, Node* head, int key) {
        // Code here
        while(head){
            if(head->data == key)
            return true;
            
            head = head->next;
        }
        return false;
    }
    int getCount(Node* head) {
        // Code here
        int cnt = 0;
        Node* temp = head;
        while(temp){
            temp = temp->next;
            cnt++;
        }
        return cnt;
    }
};


int main()
{
    
    return 0;
}
















