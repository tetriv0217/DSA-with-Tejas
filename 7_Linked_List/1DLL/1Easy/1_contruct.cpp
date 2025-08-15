#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int data;
        Node* next;

        Node(int data,Node* next){
            this->data = data;
            this->next = next;
        }
        Node(int data){
            this->data = data;
            this->next = nullptr;
        }
};
int main()
{
    Node x = Node(2,NULL);
    cout<<(&x)->data;
    cout<<x.data;
    cout<<x.next;
    Node* y = new Node(2,NULL);
    cout<<y->data;
    return 0;
}