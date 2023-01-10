#include<stdio.h>
int main()
{
    int x=10;
    printf("The address of x is %u\n",&x);
    printf("The value at &x is %d",*(&x));
    return 0;
}