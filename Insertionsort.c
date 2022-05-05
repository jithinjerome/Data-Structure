/*******************************************************************************
CREATOR : JITHIN JEROME
TITLE - INSERTION SORT .
DATE - APRIL , 2022
*******************************************************************************/
#include <stdio.h>

int main()
{
    int n, i, j, temp, a[30];
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    printf("Enter the array rlrmrnts: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++)
    {
        temp = a[i];
        j = i - 1;
        while (j >= 0 && temp <= a[j])
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = temp;
    }

    printf("Sorted Array\n");
    for (i = 0; i < n; i++)
    {
        printf("%d", a[i]);
    }

    return 0;
}