#include<stdio.h>
int main()
{
    int n,fact=1;
    printf("Enter the number \n ");
    scanf("%d",&n);
    int i=1;
    while(i<=n)
    {
        fact=fact*i;
        i++;
    }
    printf("The factorial of number is %d \n ",fact);
    return 0;

}
