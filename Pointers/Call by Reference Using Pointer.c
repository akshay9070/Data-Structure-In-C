//Call by Reference
#include<stdio.h>
int swap(int*,int*);

int main()
{
    int a=10,b=20;
    printf("Before Swaping \ta=%d\tb=%d\n",a,b);
    swap(&a,&b);
    printf("After Swaping \ta=%d\tb=%d",a,b);
}

int swap(int* x,int* y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
