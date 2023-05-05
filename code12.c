// Declaration of Pointer to a Pointer in C
#include<stdio.h>
void main()
{
    int a=5;
    int *ptr1=&a;
    int **ptr2=&ptr1;

    //The value of a
    printf("The value of a is - %d\n",a);
    printf("The value of *ptr1 is - %d\n",*ptr1);
    printf("The value of **ptr is - %d\n\n",**ptr2);
    
    //The address of variables
    printf("The address of a is - %d\n",&a);
    printf("The address of *ptr1 is - %d\n",&ptr1);
    printf("The address of **ptr is - %d\n",&ptr2);
}