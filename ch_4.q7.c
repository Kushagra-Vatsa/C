#include<stdio.h>
int main()
{
    int n,i=0,sum=0,m;
    printf("Enter the number \n ");
    scanf("%d",&n);
    for(i;i<=10;i++)
    {
        m=n*i;
        sum=sum+m;
    }
    printf("The value of sum is %d ",sum);
    return 0;
}