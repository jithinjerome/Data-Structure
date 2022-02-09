
/*******************************************************************************
CREATOR - JITHIN JEROME
TITLE - DETAILS OF N EMPLOYEES USING  STRUCTURE.
DATE - JANUARY , 2022
*******************************************************************************/
#include<stdio.h>
struct emp
{
    char name[20];
    int emp_id;
    float salary;
};

int main()
{
    int n;
    printf("Enter the number of Employees: ");
    scanf("%d",&n);
    struct emp e[n];
    for(int i =0;i<n;i++)
    {
        printf("\nEnter the details of %dth Employee",i+1);
        printf("\nName: ");
        scanf("%s",&e[i].name);
        printf("\nEmployee ID: ");
        scanf("%d",&e[i].emp_id);
        printf("\nSalary: ");
        scanf("%f",&e[i].salary);
    }
    for(int i =0;i<n;i++)
    {
        printf("\nDetails of %dth Employee",i+1);
        printf("\nName: %s",e[i].name);
        printf("\nEmployee ID: %d",e[i].emp_id);
        printf("\nSalary: %f",e[i].salary);
    }
    return 0;
}
