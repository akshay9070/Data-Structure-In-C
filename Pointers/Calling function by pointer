#include<stdio.h>


int add(int x, int y)
{
    return(x+y);
}

int main()
{
    int result;
    int (*ptr)(int,int);//Pointer to function declaration
    ptr=&add;
    result=ptr(20,20);//Calling function by pointer
    printf("%d",result);
}
