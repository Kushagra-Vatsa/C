#include<stdio.h>
int main()
{
    int n,fact=1,i=1;
    scanf("%d",&n);
    do
    {
        fact=fact*i;
        i++;
    }while(i<=n);
    printf("The factorial is %d ",fact);
    return 0;
}
