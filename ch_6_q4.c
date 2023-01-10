#include<stdio.h>
int sumandavg(int a,int b,int *sum,int *average);
int main()
{
    int x,y,sum,average;
    printf("Enter the value of x and y \n ");
    scanf("%d%d",&x,&y);
    sumandavg(x,y,&sum,&average);
    printf("The sum  and average are %d and %d",sum,average);
    return 0;
}
int sumandavg(int a,int b,int *sum,int *average)
{
    *sum=a+b;
    *average=*sum/2;
}