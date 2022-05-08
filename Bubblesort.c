/*******************************************************************************
CREATOR : JITHIN JEROME
TITLE - BUBBBLE SORT .
DATE - APRIL , 2022
*******************************************************************************/
#include <stdio.h>

int main()
{
    int n, i, j, a[30], temp;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    printf("Enter the array elements: \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        printf("%d", a[i]);
    }
    return 0;
}