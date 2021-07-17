#include<stdio.h>
#include<malloc.h>

struct node
{
    int data;
    struct node* left;
    struct node* right;
};

struct node* createNode(int data)
{
    struct node* n;
    n=(struct node*)malloc(sizeof(struct node));
    n->data=data;
    n->left=NULL;
    n->right=NULL;
    return n;
}

struct node* search(struct node* root, int key)
{
    if(root==NULL)
    {
        return NULL;
    }
    if(root->data==key)
    {
        return root;
    }
    else if(root->data > key)
    {
        return search(root->left,key);
    }

    else
    {
        return search(root->right,key);
    }
}



int main()
{
    int s;
    printf("Enter To Search IN BST \n");
    scanf("%d",&s);
    struct node* p=createNode(5);
    struct node* p1=createNode(4);
    struct node* p2=createNode(2);
    struct node* p3=createNode(3);
    struct node* p4=createNode(6);


    p->left=p1;
    p->right=p4;
    p1->left=p2;
    p1->right=p3;

    struct node* n=search(p,s);
    if(n==NULL)
    {
        printf("Element Not Present In BST\n");
    }
    else{
        printf("Element Present In BST\n");
    }


}
