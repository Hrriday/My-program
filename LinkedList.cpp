#include<iostream>
#include<stdio.h>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
};
void traverse(struct Node *head)
{
    struct Node *p=head;
    while(p!=NULL)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
}
void insert_at_start(struct Node *head)
{
    struct Node *p=(struct Node*)malloc(sizeof(struct Node));
    p->next=head;
    p->data=25;
    head=p;
    if(head==NULL)
    {
        p->data=5;
        p->next=NULL;
        head=p;
    }
}
void insert_at_end(struct Node *head)
{
    struct Node *t;
    t=head;
    while(t->next!=NULL)
    {t=t->next;}
    struct Node *n=(struct Node*)malloc(sizeof(struct Node));
    t->next=n;
    n->data=35;
    n->next=NULL;
}
void insert_in_between(struct Node *head, int m)
{
    struct Node *t;
    t=head;
    while(t->data!=m)
    {t=t->next;}
    struct Node *n=(struct Node*)malloc(sizeof(struct Node));
    n->next=t->next;
    t->next=n;
    n->data=m+5;
}
int main()
{
    struct Node *head=NULL;
    struct Node *second=NULL;
    struct Node *third=NULL;
    head=(struct Node*)malloc(sizeof(struct Node));
    second=(struct Node*)malloc(sizeof(struct Node));
    third=(struct Node*)malloc(sizeof(struct Node));
    head->data=10;
    head->next=second;
    second->data=20;
    second->next=third;
    third->data=30;
    third->next=NULL;
    traverse(head);
    insert_at_start(head);
    insert_at_end(head);
    insert_in_between(head,20);
    cout<<endl;
    traverse(head);
    return 0;
}

