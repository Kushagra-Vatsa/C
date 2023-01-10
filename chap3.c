#include<stdio.h>
int main()
{
    float salary;
    float tax=0;
    printf("Enter your salary \n ");
    scanf("%f",&salary);
    if (salary>=250000 && salary<500000)
    {
        tax=tax+((5/100)*(salary-250000));
        
    }
     if (salary>=50000 && salary<100000)
    {
        tax=tax+((20/100)*(salary-250000));
    }
     if(salary>100000) 
    {
        tax=tax+((30/100)*(salary-250000));
    }
    printf("Your net salary is %f \n ",salary-tax);
    return 0;
}    
   