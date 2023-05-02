// Write a program in C to add numbers using call by reference
#include<stdio.h>
int sum(int *pa,int *pb);
void main()
{
    int a,b;
    int *pa=&a;
    int *pb=&b;
    printf("Enter the value of a - ");
    scanf("%d",&a);
    printf("Enter the value of b - ");
    scanf("%d",&b);
    printf("The sum of two number %d and %d is - %d",*pa,*pb,sum(&a,&b));
}
int sum(int *pa,int *pb)
{
    return (*pa + *pb);
}