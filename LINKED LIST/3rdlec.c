// Insertion in linked list at index i except index 0.
#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

void traversal(struct Node*ptr)
{
    while(ptr!=NULL)
    {
        printf("Element: %d\n",ptr->data);
        ptr=ptr->next;
    }
}

struct Node* insertionatindex(struct Node* head, int data, int index)
{
    struct Node* str=(struct Node*)malloc(sizeof(struct Node));
    struct Node* p= head;

    int i=0;
    while(i!=index-1)
    {
        p=p->next;
        i++;
    }
    str->data=data;
    str->next=p->next;
    p->next=str;
    return head;    
}
int main()
{
    struct Node*head;
    struct Node*second;
    struct Node*third;
    struct Node *fourth;

    head= (struct Node*)malloc(sizeof(struct Node));
    second= (struct Node*)malloc(sizeof(struct Node));
    third= (struct Node*)malloc(sizeof(struct Node));
    fourth= (struct Node*)malloc(sizeof(struct Node));


    head->data=10;
    head->next=second;

    second->data=20;
    second->next=third;

    third->data=30;
    third->next=fourth;

    fourth->data=40;
    fourth->next= NULL;

    traversal(head);
    head=insertionatindex(head,99,2);
    traversal(head);
    return 0;
}


