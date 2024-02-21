// Program for insertion at any index in linked list.
#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node*next;
};
void traversal(struct Node* head)
{
    struct Node* p=head;
   do{
    printf("Element: %d\n",p->data);
    p=p->next;
   }while(p !=head);
}
struct Node* insertion(struct Node* head,int data,int index)
{
    struct Node* ptr=(struct Node*)malloc(sizeof(struct Node));
    ptr->data=data;
    struct Node* p=head;
    struct Node* q=head->next;
    int i=0;
    for(i=0;i<index-1;i++)
    {
        p=p->next;
        q=q->next;
    }
    ptr->next=q;
    p->next=ptr;
    return head;
}
int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    head->data = 20;
    head->next = second;

    second->data = 30;
    second->next = third;

    third->data = 40;
    third->next = fourth;

    fourth->data = 50;
    fourth->next = head;

    printf("Before Insertion\n");
    traversal(head);
    printf("After Insertion\n");
    head=insertion(head,99,2);
    traversal(head);

    return 0;
}
