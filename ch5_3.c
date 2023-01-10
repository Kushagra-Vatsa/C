#include<stdio.h>
int area(int x);
int main()
{
    int a,Area;
    printf("Enter the side of square \n ");
    scanf("%d",&a);
    Area=area(a);
    printf("The area is %d \n ",Area);
    return 0;
}
int area(int x)
{
    int b=x*x;
    return (b);
}