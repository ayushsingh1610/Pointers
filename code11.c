// Calculate the average of array elements
#include<stdio.h>
void main()
{
    int a[5];
    int *ptr=&a[5];
    int sum=0;
    printf("Enter the elements - ");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<5;i++)
    {
        sum+=*(a+i);
    }
    float avg=sum/5;
    printf("The average of element is - %f",avg);
}