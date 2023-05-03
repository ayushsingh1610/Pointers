// Write a program in C to sort an array using a pointer.
#include<stdio.h>
void main()
{
    int a[5]={10,7,8,3,1};
    int *ptr=&a[5];
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(*(a+i) < *(a+j))
            {
                int temp=*(a+i);
                *(a+i)=*(a+j);
                *(a+j)=temp;
            }
        }
    }
    printf("The sorted array is -\n");
    for(int i=0;i<5;i++)
    {
        printf("%d\n",*(a+i));
    }
}