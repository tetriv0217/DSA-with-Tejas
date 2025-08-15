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
    Node *segregate(Node *head)
    {
        // code here
        if (head == nullptr || head->next == nullptr)
        {
            return head;
        }

        Node *dummy0 = new Node(-1);
        Node *dummy1 = new Node(-1);
        Node *dummy2 = new Node(-1);

        Node *zero = dummy0;
        Node *one = dummy1;
        Node *two = dummy2;

        Node *temp = head;

        while (temp != nullptr)
        {
            if (temp->data == 0)
            {
                zero->next = temp;
                zero = zero->next;
            }
            else if (temp->data == 1)
            {
                one->next = temp;
                one = one->next;
            }
            else
            {
                two->next = temp;
                two = two->next;
            }
            temp = temp->next;
        }

        // Connect lists in order 0 -> 1 -> 2
        zero->next = (dummy1->next) ? dummy1->next : dummy2->next;
        one->next = dummy2->next;
        two->next = nullptr;

        Node *newHead = dummy0->next;

        return newHead;
    }
};
int main()
{

    return 0;
}