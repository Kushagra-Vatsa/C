#include<stdio.h>
int main()
{
    int x;
    printf("Enter the value of x \n");
    scanf("%d",&x);
    int *p;
    p=&x;
    printf("The address of x is %u \n",p);
    printf("The value at this address is %d",*p);
    return 0;
}