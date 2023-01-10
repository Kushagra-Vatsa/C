#include<stdio.h>
//here wrongswap will not work as a copy value is sent to the function .
int swap(int *a,int *b);
int main()
{
    int x=3,y=4,temp;
    printf("The value before swap is %d and %d \n",x,y);
    // wrongswap(x,y);
    swap(&x,&y);
    printf("The value after swap is %d and %d \n ",x,y);
    return 0;
}
// int wrongswap(int a,int b)
// {
//     int temp;
//     temp=a;
//     a=b;
//     b=temp;
// }
int swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}