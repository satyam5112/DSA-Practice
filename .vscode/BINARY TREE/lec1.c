// A Program to create a binary tree.
#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* left,*right;
};
struct node* create()
{
    int x;
    struct node* newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter the data(-1 for no node): \n");
    scanf("%d",&x);
    if(x==-1)
    {
        return 0;
    }
    newnode->data=x;
    printf("Enter the left child of %d: \n",x);
    newnode->left=create();
    printf("Entr the right child of %d : \n",x);
    newnode->right=create();
    
    return newnode;
}
int main()
{
    struct node*root;
    root=0;
    root=create();

return 0;
}
