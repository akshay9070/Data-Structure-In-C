#include<stdio.h>
#include<stdlib.h>
#define capacity 5
int queue[capacity],element,front=0,rear=0;
void insert(int);
void traverse();
void delete();
int main()
{
 int choice;
 while(1)
 {
 printf("\n1.Insert Element In Queue\n");
 printf("2.Delete Element From Queue\n");
 printf("3.Display Elements In Queue\n");
 printf("4.Exit\n");
 printf("Enter Your Choice : "); 
 scanf("%d",&choice);
 switch(choice)
 {
     case 1:
     printf("Enter Element You Want To Insert : ");
     scanf("%d",&element);
     insert(element);
     break;
    
     case 2:
     delete();
     break;
     
     case 3:
     traverse();
     break;
     
     case 4:
     exit(0);
     
     default:
     printf("Invalid Choice\n");
 }
 }
}
void insert(int element)
{
    if(capacity==rear)
    {
        printf("Warning : Queue IS Full\n");
    }
    else
    {
        queue[rear]=element;
        rear++;
    }
}

void delete()
{
    int i;
    if(front==rear)
    {
        printf("Queue Is Empty\n");
    }
    
    else
    {
        printf("Deleting Queue Element From Front\n");
        printf("Deleted Element  :%d\n",queue[front]);
       for(i=0;i<rear-1;i++)
       {
        queue[i]=queue[i+1];
        }
        rear--;
        
    }
}


void traverse()
{
   int i;
   if(front==rear)
   {
       printf("Queue Is Empty\n");
   }
   else
   {
       printf("Queue Element Displaying.....\n");
       for(i=front;i<rear;i++)
       {
           printf("%d\n",queue[i]);
       }
   }

}
