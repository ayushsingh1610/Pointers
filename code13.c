// Write a program in C to count the number of vowels and consonants in a string using a pointer. 
#include<stdio.h>
#include<string.h>
#include<ctype.h>
void main()
{
    char s[50]="my name is ayush singh";
    char ch;
    char *ptr=&s[50];
    int v=0,c=0;

    for(int i=0;i<strlen(s);i++)
    {
        if(isspace(*(s+i))==0)
        {
            if(*(s+i)=='a' || *(s+i)=='e' || *(s+i)=='i' ||*(s+i)=='o' ||*(s+i)=='u')
            {
                v++;
            }
            if(!(*(s+i)=='a' || *(s+i)=='e' || *(s+i)=='i' ||*(s+i)=='o' ||*(s+i)=='u'))
            {
                c++;
            }
        }
    }
    printf("The number of vowels are - %d\n",v);
    printf("The number of consonants is - %d\n",c);
}