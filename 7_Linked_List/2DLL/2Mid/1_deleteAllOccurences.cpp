#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
    Node(int x)
    {
        data = x;
        next = prev = NULL;
    }
};
class Solution
{
public:
    void deleteAllOccurOfX(struct Node **head, int x)
    {
        Node *dummy = new Node(-1);
        dummy->next = *head;
        if (*head != nullptr)
            (*head)->prev = dummy;

        Node *temp = *head;

        while (temp != nullptr)
        {
            if (temp->data == x)
            {
                temp->prev->next = temp->next;
                if (temp->next != nullptr)
                {
                    temp->next->prev = temp->prev;
                }
                Node *toDelete = temp;
                temp = temp->next;
                delete toDelete;
            }
            else
            {
                temp = temp->next;
            }
        }

        *head = dummy->next;
        if (*head != nullptr)
            (*head)->prev = nullptr;
        delete dummy;
    }
};

int main()
{

    return 0;
}