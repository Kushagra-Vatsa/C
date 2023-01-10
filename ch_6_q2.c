#include<stdio.h>
void address(int x);
int main()
{
    int i;
    printf("enter the value of i \n ");
    scanf("%d",&i);
    printf("The address of i is %u \n ",&i);
    address(i);

    return 0;
}
void address(int x)
{
    printf("The address of i is %u \n",&x);
}
// No ,this will give 2 different address of i since a copy of value is passed to the function ,