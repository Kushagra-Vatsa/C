#include<stdio.h>
void change(int a);
int main()
{
    int x=10;
    printf("The value of i before is %d\n",x);
    change(x);
    printf("The value of i after function is %d\n");
    return 0;
}
void change(int a)
{
    a=10*a;
}