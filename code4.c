// Write a program in C to find the maximum number between two numbers using a pointer.
#include<stdio.h>
int Max(int *, int *);
void main()
{
    int a,b;
    int *pa = &a;
    int *pb= &b;
    printf("Enter the 1st number - ");
    scanf("%d",&a);
    printf("Enter the 2nd number - ");
    scanf("%d",&b);
    printf("The Maximum of two numbers is - %d",Max(&a,&b));
}
int Max(int *pa, int *pb)
{
    if(*pa>*pb)
    return *pa;

    else 
    return *pb;
}