/*******************************************************************************
CREATOR : JITHIN JEROME
TITLE - Prime Number.
DATE - JANUARY , 2022
*******************************************************************************/

#include<stdio.h>
int main()
{
    int number, prime=0;
    printf("Enter the number:");
    scanf("%d",&number);
    if(number==1 || number < 1)
    {
        printf("%d is neither a prime number not a composite number",number);
    }
    else
    {
        for (int i=2; i<=number/2; i++)
        {
            if(number%i==0)
            {
                prime+=1;
            }
        }
        if(prime>0)
        {
            printf("%d is not a prime number",number);
        }
        else
        {
            printf("%d is a prime number",number);
        }
    }
return 0;
}
