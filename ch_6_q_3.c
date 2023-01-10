#include<stdio.h>
int update(int *y);
int main()
{
    int x;
    printf("Enter the value of x \n ");
    scanf("%d",&x);
    update(&x);
    return 0;
}
int update(int *y)
{
    y=(*y)*10;
    printf("The value of x is %d",y);
}