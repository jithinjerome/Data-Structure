/*******************************************************************************
CREATOR : JITHIN JEROME
TITLE - SUM & AVERAGE OF N NUMBERS.
DATE - JANUARY , 2022
*******************************************************************************/
#include<stdio.h>
int main()

{
    int n,i,sum=0;
    printf("Enter the array size: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements:");
    for(i =0;i<n;i++)
    {
        printf("Enter the %dth elemnt\n ",i);
        scanf("%d",&arr[i]);
        sum += arr[i];
    }
    int avg = sum/n;
    printf("Sum  = %d",sum);
    printf("Average =%d ",avg);

    return 0;
}
