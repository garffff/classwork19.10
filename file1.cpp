#include <iostream>

using namespace std;

struct node{
    int data;
    node* next;
};

node* func(int A[], int n)
{
    node* first = new node{A[0], nullptr};
    node* curr = first;
    for(int i = 1; i < n; ++i)
    {
        node* nd1 = new node {A[i], nullptr};
        curr->next = nd1;
        curr = nd1;
    }
    return first;
}

int main()
{
    int A[] = {1, 2, 3, 4, 5};
    int s = 5;
    node* linkedlist = func(A, s);
    while(linkedlist != nullptr)
    {
        cout << linkedlist->data << " ";
        linkedlist = linkedlist->next;
    }
    return 0;
}
