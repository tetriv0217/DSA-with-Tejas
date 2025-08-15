#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node *prev;
    Node(int x)
    {
        data = x;
        next = NULL;
        prev = NULL;
    }
};

class Solution
{
public:
    Node *removeDuplicates(struct Node *head)
    {
        // Your code here
        Node *temp = head;
        while (temp && temp->next)
        {
            if (temp->data == temp->next->data)
            {
                Node *del = temp->next;
                if (del->next)
                {
                    del->next->prev = temp;
                }
                temp->next = del->next;
                delete del;
            }
            else
            {
                temp = temp->next;
            }
        }
        return head;
    }
};
int main()
{

    return 0;
}