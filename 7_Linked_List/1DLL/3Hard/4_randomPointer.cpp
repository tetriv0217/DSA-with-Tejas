#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node* random;

    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};


class Solution {
public:
    void copyNodeInBetween(Node* head) {
        Node* temp = head;
        while (temp != nullptr) {
            Node* front = temp->next;
            Node* newNode = new Node(temp->val);
            temp->next = newNode;
            newNode->next = front;
            temp = front;
        }
    }
    void assignRandomPointer(Node* head) {
        Node* temp = head;
        while (temp != nullptr) {
            Node* copyNode = temp->next;
            if (temp->random == nullptr) {
                copyNode->random = nullptr;
            } else {
                copyNode->random = temp->random->next;
            }
            temp = temp->next->next;
        }
    }
    Node* breakLinks(Node* head) {
        Node* temp = head;
        Node* dummy = new Node(-1);
        Node* res = dummy;
        while (temp != nullptr) {
            res->next = temp->next;
            res = res->next;
            temp->next = temp->next->next;
            temp = temp->next;
        }
        return dummy->next;
    }
    Node* copyRandomList(Node* head) {
        copyNodeInBetween(head);
        assignRandomPointer(head);
        return breakLinks(head);
    }
};
int main()
{
    
    return 0;
}