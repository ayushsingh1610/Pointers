//  Write a program in C to show the basic declaration of a pointer. 
#include<stdio.h>
void main()
{
    int a=5;
    int *ptr=&a;

    printf("The value of a - %d\n",a);
    printf("The value of a points by a pointer [ptr] - %d\n",*ptr);
    printf("It shows the address of ptr -%d\n",&ptr);
    printf("It shows the address of ptr- %d\n",ptr);
    printf("It shows the address of a - %d\n",&a);
}