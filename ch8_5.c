#include<stdio.h>
#include<string.h>
int main()
{
    char name[]="Kushagra";
    // char naam[30];
    // strcpy(naam,name);
    // printf("%s",naam);
    char surname[30]="Vatsa";
    strcat(name,surname);
    printf("%s,%s\n",name,surname);
    int val=strcmp(name,surname);
    printf("%d",val);

    return 0;
}