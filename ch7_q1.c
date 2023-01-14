#include<stdio.h>
int main()
{
    int arr[10];
    int *ptr;
    ptr=&arr[0];  // or ptr=arr;
    ptr=ptr+2;
    if(ptr==&arr[2])
    {
        printf("They point to the same location \n");
    }
    else 
    {
        printf("They point to a different location \n");
    }
    return 0;
}