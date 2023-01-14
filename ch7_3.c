#include<stdio.h>
int main()
{
    int x=1,y=1,*ptr1,*ptr2;
    ptr1=&x;
    ptr2=&y;
    printf("ptr1-%u\n",ptr1);
    printf("ptr2-%u\n",ptr2);
    printf("add 1 in ptr1-%d\n",ptr1+1);
    // printf("add 2 in ptr2-%d\n",ptr2+2);
    // printf("sub 1 from ptr1-%u\n",ptr1-1);
    printf("sub 1 from ptr2-%u\n",ptr2-1);
    printf("ptr1-ptr2=%d\n",ptr1-ptr2);


    return 0;
}