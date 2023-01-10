#include<stdio.h>
int main()
{
    int n,fact=1;
    printf("Enter the number \n ");
    scanf("%d",&n);
    int i=1;
    for(i;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("The value of factorial is %d ",fact);
    return 0;
}