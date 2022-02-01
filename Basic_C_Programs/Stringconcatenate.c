/*******************************************************************************
CREATOR : JITHIN JEROME
TITLE - STRING CONCATENATE.
DATE - JANUARY , 2022
*******************************************************************************/
#include<stdio.h>

int main()
{
    int i,j;
    char str1[50],str2[50];
    printf("\n Enter first string: ");
    scanf("%s",&str1);
    printf("\n Enter second string: ");
    scanf("%s",&str2);

    for(i=0;str1[i]!='\0';i++)
    for(j=0;str2[j]!='\0';j++,i++)
    {
        str1[i] =str2[j];
    }
    
    str1[i] ='\0';
    printf("After Concatenation :%s",str1);

    return 0;
}