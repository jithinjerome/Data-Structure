/*******************************************************************************
CREATOR : JITHIN JEROME
TITLE - LINEAR SEARCH.
DATE - MAY , 2022
*******************************************************************************/
#include <stdio.h>

int main()
{
    int n, num, i, a[30];
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    printf("Enter the array elements:\n ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the element to be searched: ");
    scanf("%d", &num);

    for (i = 0; i < n; i++)
    {
        if (a[i] == num)
        {
            printf("The element %d is found at position %d", num, i + 1);
            break;
        }
        if (a[i] == n)
        {
            printf("The element is not present in this array!!");
        }
    }

    return 0;
}