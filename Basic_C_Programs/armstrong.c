/*******************************************************************************
CREATOR - JITHIN JEROME
TITLE - ARMSTRONG NUMBERS.
DATE - JANUARY , 2022
*******************************************************************************/
#include<stdio.h>
int main()
{
    int n,rem,sum=0,temp;
    printf("Enter a 3 digit number: ");
    scanf("%d",&n);
    temp = n;
    while(n>0)
    {
        rem =n%10;
        sum = sum+(rem*rem*rem);
        n =n/10;
    }
    if(temp == sum)
    {
        printf("It is an amstrong number.");
    }
    else
    {
        printf("It is not an amstrong number.");
    }
    return 0;
}