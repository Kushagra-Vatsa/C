#include<stdio.h>
int main()
{
    int x,*p1,**p2;
    printf("Enter the value of x \n ");
    scanf("%d",&x);
    p1=&x;
    p2=&p1;
    printf("The value are %d %d %d",x,*p1,**p2);
    return 0;
}