#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

Node *constractLL(int arr[],int arrsize)
{
    Node *head,*temp,*current;
    head = new Node(arr[0]);
        current = head;
    for (int i = 1; i < arrsize; i++)
    {
        temp = new Node(arr[i]);
        current->next = temp;
        current = temp;
    }
    return head;
}

Node *deltheFirst(Node *head)
{

    if (head != nullptr)
    {
        Node *temp = head->next;
        head->next = nullptr;
        return temp;
    }
}

void traverseLL(Node *head)
{
    Node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}



int main()
{
    int arr[8] = {1,4,3,5,6,4,6,7};
    int size = sizeof(arr)/sizeof(arr[0]);
    Node *head = nullptr;
    if(size>0)
    {
       head = constractLL(arr,size);
    }
    cout<<"Linked list: ";
    traverseLL(head);
    head = deltheFirst(head);
    cout<<endl
        <<"After deleting first node: ";
        traverseLL(head);
        return 0;
}
