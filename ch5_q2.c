#include<stdio.h>
float fah(int x)
{
    float result;
    result =(x*1.8)+32;
    return result;
}
int main()
{
    float celsius,fahrenheit;
    printf("Enter the temp is celsius \n ");
    scanf("%f",&celsius);
    fahrenheit=fah(celsius);
    printf("The value in fahrenheit is %f",fahrenheit);
    return 0;
}