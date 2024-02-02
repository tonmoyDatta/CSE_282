#include<iostream>
#include<stdlib.h>
#include<bits/stdc++.h>
using namespace std;

struct Node{
int data;
Node *next;
};

int main()
{

Node *a =NULL,*b=NULL,*c=NULL, *temp = NULL;

a = (Node*) malloc(sizeof(Node));
b = (Node*) malloc(sizeof(Node));
c = (Node*) malloc(sizeof(Node));

a->data = 10;
b->data = 20;
c->data = 30;
a->next = b;
b->next = c;
c->next = NULL;

temp = a;
while (temp!=NULL){
cout<<temp->data<<" ";
temp = temp->next;
}
}
