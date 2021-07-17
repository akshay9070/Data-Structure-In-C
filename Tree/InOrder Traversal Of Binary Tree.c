//InOrder Traversal Of Binary Tree
  /*   Binary Tree To Be Traversed :

              4
            /  \
           5    8
          / \
          3  2
*/

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

void inOrder(struct node* root)
{
    
    if(root!=NULL)
    {
        inOrder(root->left);
        printf("%d ",root->data);
        inOrder(root->right);
        
    }

}


int  main()
{
    struct node* p = create_node(4);
    struct node* p1 = create_node(1);
    struct node* p2= create_node(6);
    struct node* p3= create_node(5);
    struct node* p4= create_node(2);


//Linking Left and Right Childen to root node
    p->left=p1;
    p->right=p2;
    p1->left=p3;
    p1->right=p4;
    printf("InOrder Traverse : ");
    inOrder(p);

   
}






