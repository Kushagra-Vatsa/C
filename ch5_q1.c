#include<stdio.h>
int average(int x,int y,int z)
{
    int result=(x+y+z)/3;
    return result;
}
int main()
{
    int a,b,c;
    printf("Enter the 3 numbers \n ");
    scanf("%d%d%d",&a,&b,&c);
    printf("The average is %d \n ",average(a,b,c));
    return 0;
}