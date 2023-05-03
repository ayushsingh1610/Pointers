// Write a program in C to find the factorial of a given number using pointers.
#include<stdio.h>
void Factorial(int,int*);
void main()
{
    int n;
    int* p=&n;
    int f=1;
    printf("Enter the number - ");
    scanf("%d",&n);
    Factorial(n,&f);
    printf("The factorial of %d is - %d",n,f);
}
void Factorial(int n, int *f)
{
    for(int i=1;i<=n;i++)
    {
        *f*=i;
    }
}