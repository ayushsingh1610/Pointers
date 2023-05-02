//  Write a program in C to show the basic declaration of a pointer. 
#include<stdio.h>
void main()
{
    int a=5;
    int *ptr=&a;
    int* pc, c;

    printf("The value of a - %d\n",a);
    printf("The value of a points by a pointer [ptr] - %d\n",*ptr);
    printf("It shows the address of ptr -%d\n",&ptr);
    printf("It shows the address of ptr- %d\n",ptr);
    printf("It shows the address of a - %d\n\n\n",&a);

   c = 22;
   printf("Address of c: %p\n", &c);
   printf("Value of c: %d\n\n", c);  // 22
   
   pc = &c;
   printf("Address of pointer pc: %p\n", pc);
   printf("Content of pointer pc: %d\n\n", *pc); // 22
   
   c = 11;
   printf("Address of pointer pc: %p\n", pc);
   printf("Content of pointer pc: %d\n\n", *pc); // 11
   
   *pc = 2;
   printf("Address of c: %p\n", &c);
   printf("Value of c: %d\n\n", c); // 2
}