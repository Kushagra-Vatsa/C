#include<stdio.h>
void sumandaverage(int a,int b,int *sum,float *average);
int main()
{
    int x,y,sum;
    float average;
    printf("Enter the 2 numbers \n");
    scanf("%d%d",&x,&y);
    sumandaverage(x,y,&sum,&average);
    printf("The value of sum and average is %d and %f\n",sum,average);
    return 0;
}
void sumandaverage(int a,int b,int *sum,float *average)
{
    *sum=a+b;
    *average=(float)(*sum)/2;
}