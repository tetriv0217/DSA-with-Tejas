#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;

    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

class Solution
{
public:
    Node *reverse(Node *head)
    {
        if (head->next == nullptr)
        {
            return head;
        }
        Node *temp = head;
        Node *prev = nullptr;
        Node *front = head;
        while (temp != nullptr)
        {
            front = temp->next;
            temp->next = prev;
            prev = temp;
            temp = front;
        }
        return prev;
    }
    Node *addOne(Node *head)
    {
        // Your Code here
        Node *temp = head;
        Node *prev = nullptr;
        temp = reverse(head);
        Node *newHead = temp;
        int carry = 1;
        while (temp != nullptr)
        {
            if (carry == 1)
            {
                if (temp->data == 9)
                {
                    carry = 1;
                    temp->data = 0;
                }
                else
                {
                    temp->data += 1;
                    carry = 0;
                }
            }
            prev = temp;
            temp = temp->next;
        }
        if (carry == 1)
        {
            Node *newNode = new Node(1);
            prev->next = newNode;
        }
        newHead = reverse(newHead);
        return newHead;
        // return head of list after adding one
    }
};

int main()
{

    return 0;
}