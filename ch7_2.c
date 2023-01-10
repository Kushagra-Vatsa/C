#include<stdio.h>
int main()
{
    int i=10;
    int *ptr;
    ptr=&i;
    printf("The value of ptr is %u\n",ptr);
    ptr++;
    printf("The value of ptr is %u\n",ptr);
    printf("The value at ptr is %d\n",*ptr); 
    return 0;
}