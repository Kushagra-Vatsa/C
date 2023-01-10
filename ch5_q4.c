#include<stdio.h>
int fib(int x)
{
    if(x==1)
    {
        return 0;
    }
    else if(x==2)
    {
        return 1;
    }
    else 
    return fib(x-1)+fib(x-2);
}
int main()
{
    int n,c;
    printf("Enter the term of fibonacci series \n ");
    scanf("%d",&n);
    c=fib(n);
    printf("The value of %d term of fibonacci series is %d \n ",n,c);
    return 0;
}
