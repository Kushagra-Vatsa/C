#include<stdio.h>
int main()
{
    char name[30];
    printf("Enter your name :");
    // scanf("%s",name);
    gets(name);
    puts(name);
    // printf("\nYour name is %s",name);
    return 0;
}