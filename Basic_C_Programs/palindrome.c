/*******************************************************************************
CREATOR - JITHIN JEROME
TITLE - ARMSTRONG NUMBERS.
DATE - JANUARY , 2022
*******************************************************************************/
#include<stdio.h>
#include<string.h>
int main()

{
    char string[100];
    int flag;
    printf("Enter the string to be checked: ");
    gets(string);
    int l = strlen(string);
    for(int i=0;i<l;i++)
    {
        if(string[i] != string[l-i-1])
        {
            flag = 1;
        }
        break;
    }
    if(flag != 1)
    {
        printf("The sting is PALINDROME");
    }
    else
    {
        printf("The string is not a PALINDROME");
    }
    return 0;
}