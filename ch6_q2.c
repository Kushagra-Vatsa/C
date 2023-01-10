#include<stdio.h>
void address(int a);
int main()
{
    int i=1;
    printf("The address of i before function is %u\n",&i);
    address(i);
    return 0;
}
void address(int i)
{
    printf("The address of i is %u\n",&i);
}