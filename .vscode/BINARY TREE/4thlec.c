// Program for insertion in a binary tree.
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
void preorder(struct node* root)
{
    if (root==0)
    {return;}
    printf("%d ",root->data);
    preorder(root->left);
    preorder(root->right);
}
void inorder(struct node* root)
{
    if (root==0)
    {return;}
    inorder(root->left);
    printf("%d ",root->data);
    inorder(root->right);
}
void postorder(struct node* root)
{
    if (root==0)
    {return;}
    postorder(root->left);
    postorder(root->right);
    printf("%d ",root->data);
}
// struct node* insert(struct node* root,int key)
// {   struct node* prev=NULL;
//     while(root!=NULL)
//     {
//         prev=root;
//         if(key==root->data)
//         {
//             return root;
//         }
//         else if(key<root->data)
//         {
//             root=root->left;
//         }
//         else
//         {
//             root=root->right;
//         }
//         struct node* newnode=(struct node*)malloc(sizeof(struct node));
//         newnode->data=key;
//         newnode->left=NULL;
//         newnode->right=NULL;
//         if(key<prev->data)
//         {
//             prev->left=newnode;
//         }
//         else if(key>prev->data)
//         {
//             prev->right=newnode;
//         }
//     } return root;
// }
struct node* create_a_node(int item)
{
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    newnode->left=NULL;
    newnode->right=NULL;
    newnode->data=item;
}
struct node* insert(struct node* root,int item)
{
    if (root==NULL)
    {
        return create_a_node(item);
    }
    else if(item<root->data)
    {
        root->left=insert(root->left,item);
    }
    else if(item>root->data)
    {
        root->right=insert(root->right,item);
    }
    return root;
}
int main()
{
    struct node*root;
    root=create();

    printf("Before Insertion\n");
    printf("PREORDER\n");
    preorder(root);
    printf("\nINORDER\n");
    inorder(root);
    printf("\nPOSTORDER\n");
    postorder(root);
    printf("\n");

    insert(root,45);
    insert(root,34);
    insert(root,95);

    printf("\nAfter insertion\n");
    printf("PREORDER\n");
    preorder(root);
    printf("\nINORDER\n");
    inorder(root);
    printf("\nPOSTORDER\n");
    postorder(root);


return 0;
}



