// PProgram for deletion in a binary tree.
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
    printf("Enter the right child of %d : \n",x);
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
struct node* inorederpredescessor(struct node*root)
{
    root=root->left;
    while(root->right!=NULL)
    {
        root=root->right;
    }
    return root;
}
struct node* delete(struct node* root,int value)
{   
    struct node*ipre;
    if(root==NULL)
    {
        return NULL;
    }
    if(root->left==NULL && root->right==NULL)
    {
        free(root);
        return NULL;
    }
    // search for node
    if(value<root->data)
    {
        root->left=delete(root->left,value);
    }
    else if(value>root->data)
    {
        root->right=delete(root->right,value);
    }

    // delete when node is found.
    else
    {
    ipre=inorederpredescessor(root);
    root->data=ipre->data;
    root->left=delete(root->left,ipre->data);
    }
    return root;
}
int main()
{
    struct node*root;
    root=0;
    root=create();

    printf("Before Deletion\n");
    printf("PREORDER\n");
    preorder(root);
    printf("\nINORDER\n");
    inorder(root);
    printf("\nPOSTORDER\n");
    postorder(root);

    delete(root,32);
    delete(root,72);

    printf("After Deletion\n");
     printf("Before Deletion\n");
    printf("PREORDER\n");
    preorder(root);
    printf("\nINORDER\n");
    inorder(root);
    printf("\nPOSTORDER\n");
    postorder(root);
return 0;
}



