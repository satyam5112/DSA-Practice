// Program for insertion at end in a doubly linked list.
#include<stdio.h>
#include<stdlib.h>

struct Node{
    struct Node* prev;
    int data;
    struct Node* next;
};
void traversal1(struct Node* head)
{
    struct Node* ptr= head;
    while(ptr!=NULL)
    {
        printf("Element: %d\n",ptr->data);
        ptr=ptr->next;
    }
}
void traversal2(struct Node* last)
{
    struct Node* ptr =last;
    while(ptr!=NULL)
    {
        printf("Element: %d\n",ptr->data);
        ptr=ptr->prev;
    }
}
struct Node* insertionatend(struct Node* head,int data,struct Node* last)
{
    struct Node* str=malloc(sizeof(struct Node));
    str->data=data;
    struct Node* ptr=head;
    do{
        ptr=ptr->next;
    }while(ptr->next!=NULL);
    str->next=NULL;
    str->prev=ptr;
    ptr->next=str;
    last=str;
    return last;
}
int main()
{
    struct Node* head=(struct Node*)malloc(sizeof(struct Node));
    struct Node* second=(struct Node*)malloc(sizeof(struct Node));
    struct Node* third=(struct Node*)malloc(sizeof(struct Node));
    struct Node* last=(struct Node*)malloc(sizeof(struct Node));

    head->prev=NULL;
    head->data=10;
    head->next=second;

    second->prev=head;
    second->data=20;
    second->next=third;

    third->prev=second;
    third->data=30;
    third->next=last;

    last->prev=third;
    last->data=40;
    last->next=NULL;

    printf("Before Insertion\n");
    traversal1(head);
    printf("\n");
    printf("After Insertion\n");
    last=insertionatend(head,99,last);
    traversal1(head);
    printf("\n");
    traversal2(last);
    return 0;
}

