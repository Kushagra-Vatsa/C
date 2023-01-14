 #include<stdio.h>
int main()
{
    int numofstud,numofsub;
    printf("Enter the number of students and number of subjects \n");
    scanf("%d%d",&numofstud,&numofsub);
    int marks[numofstud][numofsub];
    for(int i=0;i<numofstud;i++)
    {
        for(int j=0;j<numofsub;j++)
        {
        printf("Enter the marks of student %d :",i+1);
        scanf("%d",&marks[i][j]);
        }
    }
    for(int i=0;i<numofstud;i++)
    {
        for(int j=0;j<numofsub;j++)
        {
        printf("The marks of student %d is %d \n:",i+1,marks[i][j]);
        }
    }
    return 0;
}  