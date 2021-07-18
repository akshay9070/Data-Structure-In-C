 /*
             5
           /  \
           3   6
          / \
          2  4

*/


#include<stdio.h>
#include<malloc.h>

struct node{
    int data;
    struct node* left;
    struct node* right;
};

struct node* createNode(int data){
    struct node* n=(struct node*)malloc(sizeof(struct node));
    n->data=data;
    n->left=NULL;
    n->right=NULL;
    return n;
}

void inOrder(struct node* root){
    if(root!=NULL){
        inOrder(root->left);
        printf("%d ",root->data);
        inOrder(root->right);
    }
    
}

void insert(struct node* root,int key){
    struct node* prev=NULL;
       while(root!=NULL){
        prev=root;
        if(root->data==key){
            printf("Can't Insert %d Already present in BST\n",root->data);
            return ;
        }
        else if(root->data>key){
            root=root->left;
        }
        else{
            root=root->right;
        }
    }
    struct node* insert_new = createNode(key);
    if(prev->data>key){
        prev->left=insert_new;
    }
    else{
        prev->right=insert_new;
    }
}


int main(){
    int new_data;//new data for node creation in BST
    printf("Enter data of New node to insert\n");
    scanf("%d",&new_data);

    struct node* p = createNode(5);
    struct node* p1 = createNode(3);
    struct node* p2 = createNode(2);
    struct node* p3 = createNode(4);
    struct node* p4 = createNode(6);


    p->left=p1;
    p->right=p4;
    p1->left=p2;
    p1->right=p3;
    
    printf("Previous BST :\n");
    inOrder(p);
    printf("\n");
    insert(p,new_data);
    printf("New BST\n");
    inOrder(p);
}
