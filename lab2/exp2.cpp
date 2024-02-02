#include<bits/stdc++.h>
#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node (int x)
    {
        data = x;
        next = nullptr;
    }
};

Node* constructLL(int arr[],int arrsize){
    Node *head = new Node(arr[0]);
    Node *current = head;

    for (int i = 1; i<arrsize; i++)
    {
        Node *temp = new Node(arr[i]);
        current->next = temp;
        current = temp;
    }
    return head;
}

void Traverselist(Node *head)
{
    while (head!=nullptr)
    {
        cout<<head->data<<" ";
        head = head->next;
    }
}

int main (){
    int arr[8] = {2,4,5,6};
    Node *head = constructLL(arr,4);
    Traverselist(head);

}
