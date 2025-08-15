#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
    struct Node *bottom;

    Node(int x)
    {
        data = x;
        next = NULL;
        bottom = NULL;
    }
};

class Solution
{
public:
    // Function which returns the  root of the flattened linked list.
    Node *merge2list(Node *l1, Node *l2)
    {
        Node *t1 = l1;
        Node *t2 = l2;
        Node *dummy = new Node(-1);
        Node *res = dummy;
        while (t1 != nullptr && t2 != nullptr)
        {
            if (t1->data < t2->data)
            {
                res->bottom = t1;
                res = res->bottom;
                t1 = t1->bottom;
            }
            else
            {
                res->bottom = t2;
                res = res->bottom;
                t2 = t2->bottom;
            }
            res->next = nullptr;
        }
        if (t1 != nullptr)
        {
            res->bottom = t1;
        }
        if (t2 != nullptr)
        {
            res->bottom = t2;
        }
        return dummy->bottom;
    }
    Node *flatten(Node *root)
    {
        // Your code here
        if (root == nullptr || root->next == nullptr)
        {
            return root;
        }
        Node *mergeHead = flatten(root->next);

        return merge2list(root, mergeHead);
    }
};
int main()
{

    return 0;
}