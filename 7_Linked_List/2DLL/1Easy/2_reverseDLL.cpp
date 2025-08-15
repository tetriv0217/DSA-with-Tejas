#include <bits/stdc++.h>
using namespace std;

class DLLNode
{
public:
    int data;
    DLLNode *next;
    DLLNode *prev;

    DLLNode(int val)
    {
        data = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

class Solution
{
public:
    // Function to reverse a doubly linked list
    DLLNode *reverseDLL(DLLNode *head)
    {
        // Your code here
        DLLNode *temp = head;
        DLLNode *curPrev = nullptr;
        while (temp != nullptr)
        {
            curPrev = temp->prev;
            temp->prev = temp->next;
            temp->next = curPrev;
            // curPrev = temp;
            temp = temp->prev;
        }
        return curPrev->prev; // it will be at the second last node
    }
};
int main()
{

    return 0;
}