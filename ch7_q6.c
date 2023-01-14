#include<stdio.h>
int main()
{
    int arr[100];
    int n,count=0;
    printf("Enter the number of elements in array \n");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]>=0)
        {
            count++;
        }
    }
    printf("The total number of positive integers are %d",count);

    return 0;
}
