// Write a program in C to add two numbers using pointers. 
#include<stdio.h>
void main()
{
    int a,b;
    int*ptra=&a;
    int*ptrb=&b;
    printf("Enter the value of a - ");
    scanf("%d",&a);
    printf("Enter the value of b - ");
    scanf("%d",&b);
    printf("\nThe sum of two number %d and %d is - %d.",*ptra,*ptrb,(*ptra + *ptrb));
    printf("\nThe sum of two number %d and %d is - %d.",a,b,(a+b));
}