#include<stdio.h>
int sum(int x)
{
    if(x==1)
    {
        return 1;
    }
    if(x==2)
    {
        return 3;
    }
    else 
    {
        return sum(x-1)+x;
    }
}
int main()
{
    int n,c;
    printf("Enter the term of natural number \n ");
    scanf("%d",&n);
    c=sum(n);
    printf("The sum of n natural number are %d",c);
    return 0;
}