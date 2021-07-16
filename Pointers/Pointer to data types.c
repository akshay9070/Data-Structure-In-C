#include<stdio.h>
int main()
{
    int i=1100;
    int *ptr;
    ptr=&i;
    printf("%u\n",&i);//address of i
    printf("%u\n",ptr);//value store in ptr i.e address of i,since ptr=&i
    printf("%u\n",&ptr);//adress of ptr
    printf("%u\n",*ptr);//* returns the value that is in address of i.
    printf("%u",*(&i));//returns value of i
}
