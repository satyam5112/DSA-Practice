// Program for insaertion at beginning in a doubly linked list.
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
void traversal2(struct Node* fourth)
{
    struct Node* ptr = fourth;
    while(ptr!=NULL)
    {
        printf("Element: %d\n",ptr->data);
        ptr=ptr->prev;
    }
}
struct Node* insertionatbeg(struct Node* head, int data)
{
    struct Node* ptr=(struct Node*)malloc(sizeof(struct Node));
    ptr->prev=NULL;
    ptr->data=data;
    ptr->next=head;
    head->prev=ptr;
    head=ptr;
    return head;
}
int main()
{
    struct Node* head=(struct Node*)malloc(sizeof(struct Node));
    struct Node* second=(struct Node*)malloc(sizeof(struct Node));
    struct Node* third=(struct Node*)malloc(sizeof(struct Node));
    struct Node* fourth=(struct Node*)malloc(sizeof(struct Node));

    head->prev=NULL;
    head->data=10;
    head->next=second;

    second->prev=head;
    second->data=20;
    second->next=third;

    third->prev=second;
    third->data=30;
    third->next=fourth;

    fourth->prev=third;
    fourth->data=40;
    fourth->next=NULL;

    printf("Before Insertion\n");
    traversal1(head);
    printf("\n");
    printf("After Insertion\n");
    head=insertionatbeg(head,99);
    traversal1(head);
    printf("\n");
    traversal2(fourth);

return 0;
}