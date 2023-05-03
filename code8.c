//  Write a program in C to compute the sum of all elements in an array using pointers.
#include<stdio.h>
void main()
{
    int a[5];
    int* p=&a[5];
    int i=0;
    printf("Enter the elements - \n");
    for(int i=0;i<5;i++)
    {
        printf("Element at %d - ",i);
        scanf("%d",&a[i]);
    }
    int sum = 0;
    for(int i=0;i<5;i++)
    {
        sum+=*(a+i);
    }
    printf("\nThe sum of all elements is - %d",sum);
}
