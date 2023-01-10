#include<stdio.h>
int main()
{
    int marks[5],i=0;
    printf("Enter the marks of 5 students \n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&marks[i]);
    }
    printf("The marks of the 5 students are \n");
    for(i=0;i<5;i++)
    {
        printf("%d\n",marks[i]);
    }
    return 0;
}