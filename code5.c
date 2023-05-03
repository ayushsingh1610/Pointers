//  Write a program in C to store n elements in an array and print the elements using a pointer.
#include<stdio.h>
void main()
{
    int a[5];
    // ={1,2,3,4,5}
    int *pa=&a[5];
    printf("Enter the number - \n");
    for(int i=0;i<5;i++)
    {
        printf("Element at %d - ",i);
        scanf("%d",&a[i]);
    }
    printf("\n\nThe elements are - ");
    for(int i=0;i<5;i++)
    {
        printf("\nElement at %d - %d",i,*(a+i));
    }
}