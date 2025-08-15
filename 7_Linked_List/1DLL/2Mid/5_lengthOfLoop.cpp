#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

class Solution
{
public:
    int findLength(Node *slow, Node *fast)
    {
        fast = fast->next;
        int cnt = 1;
        while (slow != fast)
        {
            fast = fast->next;
            cnt++;
        }
        return cnt;
    }
    int lengthOfLoop(Node *head)
    {
        // Code here
        Node *slow = head;
        Node *fast = head;
        while (fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast)
            {
                return findLength(slow, fast);
            }
        }
        return 0;
    }
};
int main()
{

    return 0;
}