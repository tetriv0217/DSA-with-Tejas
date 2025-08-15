#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node *prev;

    Node(int _data)
    {
        data = _data;
        next = nullptr;
        prev = nullptr;
    }
};
void traverse(Node *head)
{
    Node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
Node *addNode(Node *head, int p, int x)
{
    // code here
    Node *temp = head;
    Node *newNode = new Node(x);

    while (temp != nullptr && p != 0)
    {
        temp = temp->next;
        p--;
    }
    // inserting after tail
    if (temp->next == nullptr)
    {
        temp->next = newNode;
        newNode->prev = temp;
    }
    else
    {
        newNode->next = temp->next;
        newNode->prev = temp;
        temp->next->prev = newNode;
        temp->next = newNode;
    }
    return head;
}
Node *deleteNode(Node *head, int x)
{
    // Your code here
    if (head == nullptr)
    {
        return head;
    }
    Node *temp = head;
    if (x == 1)
    {
        head = head->next;
        head->prev = nullptr;
        temp->next = nullptr;
        return head;
    }
    while (temp != nullptr && x != 1)
    {
        temp = temp->next;
        x--;
    }

    // it is tail
    if (temp->next == nullptr)
    {
        temp->prev->next = nullptr;
        temp->prev = nullptr;
        delete (temp);
        return head;
    }
    temp->next->prev = temp->prev;
    temp->prev->next = temp->next;

    free(temp);
    return head;
}
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    Node *head = new Node(arr[0]);
    Node *temp = head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node *newNode = new Node(arr[i]);
        temp->next = newNode;
        newNode->prev = temp;
        temp = temp->next;
    }
    traverse(head);

    return 0;
}