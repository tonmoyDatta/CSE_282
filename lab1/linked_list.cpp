#include<iostream>

using namespace std;

struct Node
{
    int data;
    Node *next;
};

int main()
{
    Node *a =  NULL, *b = NULL, *c = NULL;

    a = (Node*) malloc(sizeof(Node));
    b = (Node*) malloc(sizeof(Node));
    c = (Node*) malloc(sizeof(Node));

    a ->data = 30;
    b ->data = 20;
    c ->data = 40;
    a ->next = b;
    b ->next = c;
    c ->next = NULL;

    while (a != NULL)
    {
        cout<<a ->data<< " A";
        a = a ->next;
    }
}
