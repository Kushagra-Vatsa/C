#include<stdio.h>
void main()
{
    int a[4]={5,1,15,20,25};
    int i,j,m;
    i=++a[1];
    j=a[1]++;
    m=a[i++];
    printf("%d,%d,%d",i,j,m);

}