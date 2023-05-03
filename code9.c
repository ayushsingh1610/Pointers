//  Write a program in C to print the elements of an array in reverse order.
#include<stdio.h>
void main()
{
    int a[5]={2,4,6,8,10};
    int *p=&a[5];
    int sum=0;
    printf("The reverse order is -\n");
    for(int i=4;i>=0;i--)
    {
        printf("%d\n",*(a+i));
    }
}