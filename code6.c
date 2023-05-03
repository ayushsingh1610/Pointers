// Write a program in C to swap elements using call by reference.
#include<stdio.h>
void swap(int*, int*);
void main()
{
    int a,b;
    int *ptra=&a;
    int *ptrn=&b;
    printf("Enter the 1st number - ");
    scanf("%d",&a);
    printf("Enter the 2nd number - ");
    scanf("%d",&b);
    swap(&a,&b);
}
void swap(int *ptra, int *ptrb)
{
    static int temp;
    temp=*ptra;
    *ptra=*ptrb;
    *ptrb=temp;

    printf("After swapping the numbers are -\na - %d\nb - %d.",*ptra,*ptrb);

}