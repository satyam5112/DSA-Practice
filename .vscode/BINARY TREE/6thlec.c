// A program tfor insertion in a binary tree.
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* left;
    struct node*right;
    int height;
};
int height(struct node* node)
{
    if(node==0)
      return 0;
    return node->height;
}
int max(int a,int b)
{
    return (a>b)?a:b;
}
struct node* newnode(int key)
{
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=key;
    newnode->left=0;
    newnode->right=0;
    newnode->height=1;
}
struct node*rightRotate(struct node*y)
{
    struct node*x=y->left;
    struct node*T2=x->right;

    x->right=y;
    y->left=T2;

    y->height=max(height(y->left),height(y->right))+1;
    x->height=max(height(x->left),height(x->right))+1;

    return x;
}
struct node*leftRotate(struct node*x)
{
    struct node*y=x->right;
    struct node*T2=y->left;

    y->left=x;
    x->right=T2;

    x->height=max(height(x->left),height(x->right))+1;
    y->height=max(height(y->left),height(y->right))+1;

    return y;
}
int getbalance(struct node*N)
{
    if(N==0)
    return 0;
    return height(N->left)-height(N->right);
}
struct node* insert(struct node* node,int key)
{
    if(node==0)
    return newnode(key);

    if(key<node->data)
     node->left=insert(node->left,key);
    else if(key>node->data)
     node->right=insert(node->right,key);
    else 
     return node;

    // update height of ancestor node

    node->height = 1+max(height(node->left),height(node->right));

    // check for unbalancing

    int balance=getbalance(node);

    // 4 cases
    // 1.LEFT LEFT CASE
    if (balance>1 && key<node->left->data)
     return rightRotate(node);

    // 2.RIGHT RIGHT CASE
    if (balance<-1 && key>node->right->data)
     return leftRotate(node);

    // 3.LEFT RIGHT CASE
    if (balance > 1 && key > node->left->data) {
        node->left = leftRotate(node->left);
        return rightRotate(node);
    }

    // 4.RIGHT LEFT CASE
    if (balance < -1 && key < node->right->data) {
        node->right = rightRotate(node->right);
        return leftRotate(node);
    }

    // Return the unchanged node pointer
    return node;
}
void preorder(struct node* root)
{
    if (root==0)
    {return;}
    printf("%d ",root->data);
    preorder(root->left);
    preorder(root->right);
}
int main() {
    struct node *root;
    root=0;
    // root=create();
    /* Constructing tree given in the above figure */
    root = insert(root, 10);
    root = insert(root, 20);
    root = insert(root, 50);
    root = insert(root, 40);
    root = insert(root, 25);
    root = insert(root, 30);

    /* The constructed AVL Tree would be
            30
           /  \
         20   40
        /  \     \
       10  25    50
    */
    printf("Preorder traversal of the constructed AVL tree is \n");
    preorder(root);

    insert(root,39);
    insert(root,45);
    insert(root,75);
    insert(root,56);
    
    printf("\nPreorder traversal of the  AVL tree after insertion is \n");
    preorder(root);
    return 0;
}