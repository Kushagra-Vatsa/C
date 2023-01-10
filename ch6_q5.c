#include<stdio.h>
int main()
{
    int i=10;
    int *ptr1,**ptr2;
    ptr1=&i;
    ptr2=&ptr1;
    printf("The value if i is %d",**ptr2);
    return 0;
}