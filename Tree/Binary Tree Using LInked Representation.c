#include<stdio.h>
#include<malloc.h>

struct node
{
    int data;
    struct node* left;
    struct node* right;
};

struct node*create_node(int data)
{
    struct node* n;// node pointer
    n=(struct node*)malloc(sizeof(struct node));//allocating memory
    n->data=data;//setting data of node
    n->left=NULL;//setting left children to NULL
    n->right=NULL;//setting right children to NULL
    return n;
    
}


int  main()
{
    struct node* p = create_node(2);
    struct node* p1 = create_node(4);
    struct node* p2= create_node(5);
//Linking Left and Right Childen to root node
    p->left = p1;
    p->right = p2;
}






