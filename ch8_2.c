#include<stdio.h>
int main()
{
    char name[]="Kushagra";
    // char ptr[]="Kushagra";
    char *ptr=name;
    while(*ptr!='\0')
    {
        printf("%c",*ptr);
        ptr++;
    }
    return 0;
}