#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("Enter the number upto which sum is added \n ");
    scanf("%d",&n);
    // for(int i=0;i<=n;i++)
    // {
    //     sum=sum+i;
    // }
    // printf("The sum is %d \n ",sum);
    int i=0;
    do
    {
        sum=sum+i;
        i++;
    }while(i<=n);
    printf(" The sum is %d ",sum);
    return 0;
}