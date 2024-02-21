// Program for inserton at last node.
#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

// TRAVERSAL
void traversal(struct Node* ptr )
{
    while(ptr!=NULL)
    {
        printf("Element: %d\n",ptr->data);
        ptr=ptr->next;
    }
}
// INSERTION AT END

struct Node * insertion(struct Node* head,int data)
{
    struct Node* str=(struct Node*)malloc(sizeof(struct Node));
    str->data=data;
    struct Node* p=head;

    while(p->next!=NULL)
    {
        p=p->next;
    }
    p->next=str;
    str->next=NULL;
    return head;
}

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    head=(struct Node*)malloc(sizeof(struct Node));
    second=(struct Node*)malloc(sizeof(struct Node));
    third=(struct Node*)malloc(sizeof(struct Node));
    fourth=(struct Node*)malloc(sizeof(struct Node));

    head->data= 20;
    head->next= second;

    second->data=30;
    second->next=third;

    third->data=40;
    third->next= fourth;

    fourth->data=50;
    fourth->next= NULL;

    traversal(head);
    insertion(head,99);
    traversal(head);

    return 0;
}