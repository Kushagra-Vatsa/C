#include<stdio.h>
int main()
{
    int n,i=0;
   printf("Enter the number \n ") ;
   scanf("%d",&n);
   do
   {
        printf("The value of n natural number is %d \n ",i+1);
        i++;
   }while(i<n);
return 0;
}