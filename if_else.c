#include<stdio.h>
int main()
{
    int age , vip;
    printf("Enter your age \n ");
    scanf("%d",&age);
    printf("Enter vip condition \n ");
    printf("Enter 1 for emergency \n ");
    printf("Enter 0 for no emergency \n ");
    scanf("%d",&vip);
    if ((age>=18 && age<80) || (vip==1))
    {
        printf("You are allowed to drive \n ");
    }
    else 
    {
        printf("You are not allowed to drive \n ");
    }
    return 0;
    
}