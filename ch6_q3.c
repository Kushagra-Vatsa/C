#include<stdio.h>
void change(int *a);
int main()
{
    int x;
    printf("Enter the value of x \n");
    scanf("%d",&x);
    printf("The value of x before function is %d\n",x);
    change(&x);
    printf("The value of x after function is %d\n",x);
    return 0;
}
void change(int *a)
{
    *a=10*(*a);
}