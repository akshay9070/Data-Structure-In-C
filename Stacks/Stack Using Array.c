#include<stdio.h>
#include<stdlib.h>
#define capacity 5
int stack[capacity],top=-1;
void push(int);
int isFull();
int pop();
int isEmpty();
void peak();
void traverse();
int main()
{
    int choice,n;
    while(1)
    {
    printf("1.Push \n");
    printf("2.Pop \n");
    printf("3.Paek \n");
    printf("4.Traverse \n");
    printf("5.Exit \n");
    printf("Enter Your Choice : ");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1 : printf("Enter Num to Push on stack : ");
                 scanf("%d",&n);
                 push(n);
                 break;

        case 2 :
                n=pop();
                if(n==0)
                {
                    printf("Stack Overflow\n");
                }
                else
                {
                    printf("Popping Elements of stack...\n");
                    printf("%d is popped elements\n",n);
                }
                break;
        
        
                
                

        case 3 :peak();
                break;
        case 4 :traverse();
                break;
        case 5 :exit(1);
        default :printf("Invalid Choice Entered /n");

    }


    }
}


void push(int ele)
{
    if(isFull())
    {
    printf("WARING: Stack OverFlow\n");
    }
    else 
    {
        top++;
        stack[top]=ele;
    }
}


int isFull()
{
    if(top==capacity-1)
    {
        return(1);
    }
    else
    {
        return(0);
    }
}

int pop()
{
    if(isEmpty())
    {
        printf("WARNING : Stack UnderFlow");
        return(0);
    }
    else
    {
      return(stack[top--]);  
    }
}

int isEmpty()
{
    if(top==-1)
    {
        return(1);
    }
    else
    {
        return(0);
    }
}


void peak()
{
    if(top==-1)
    {
        printf("Stack Underflow\n");
    }
    else
    {
        printf("Top element of stack is %d\n",stack[top]);
    }
}

void traverse()
{
    int i;
    if(top==-1)
    {
        printf("Stack Underflow\n");
    }
    else
    {
       printf("The stack elements are....\n");
       for(i=0;i<=top;i++)
       {
         printf("%d\n",stack[i]);  
       }
    }    
}
