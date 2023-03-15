#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;

typedef struct node* List;
struct node
{
    int data;
    struct node *next;
};

List Read()
{
    int x;
    List q, r, head;
    cin>>x;
    head = (List)malloc(sizeof(struct node));
    r = head;
    while(x != -1)
    {
        q = (List)malloc(sizeof(struct node));
        q->data = x;
        r->next = q;
        r = q;
        cin>>x;
    }
    r->next = NULL;
    return head;
}

List LinkList(List La, List Lb)
{
    List Lc, pa, pb, pc, ptr;
    pa = La->next;
    pb = Lb->next;
    Lc = (List)malloc(sizeof(struct node));
    pc = Lc;
    pc->next = NULL;
    while(pa != NULL && pb != NULL)
    {
        if(pa->data < pb->data)
        {
            pa = pa->next;
        }
        else if(pa->data > pb->data)
        {
            pb = pb->next;
        }
        else
        {
            pc->next = pa;
            pc = pa;
            pa = pa->next;
            pb = pb->next;
        }
    }

    return (Lc);
}

void Print(List s)
{
    int k;
    k = 0;
    s = s->next;
    if(s == NULL)
    {
        cout<<"NULL";
        return ;
    }
    while(s != NULL)
    {
        if(k != 0)
            cout<<" ";
        cout<<s->data;
        s = s->next;
        k++;
    }
    cout<<endl;
    return ;
}

int main()
{
    int x;
    List s1, s2, s3;
    s1 = Read();
    s2 = Read();
    s3 = LinkList(s1, s2);
    Print(s3);
    return 0;
}

