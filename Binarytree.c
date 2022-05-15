/*******************************************************************************
CREATOR : JITHIN JEROME
TITLE - BINARY TREE.
DATE - APRIL , 2022
*******************************************************************************/
#include <stdio.h>
#include <math.h>
int main()
{
    int i, n, size, nodes;
    char a[50];
    printf("Enter the height of the tree:");
    scanf("%d", &n);
    size = n + 1;

    printf("\nEnter the root element: ");
    fflush(stdin);
    scanf("%c", &a[0]);

    nodes = pow(n, 2) - 2;
    printf("\nEnter "
           "-"
           " to represent free space");
    for (i = 0; i < nodes; i++)
    {
        if (a[i] != '-')
        {
            printf("\nEnter the left child of %c:", a[i]);
            fflush(stdin);
            scanf("%c", &a[(2 * i) + 1]);
            printf("\nEnter the right child of %c: ", a[i]);
            fflush(stdin);
            scanf("%c", &a[(2 * i) + 2]);
        }
        else
        {
            a[(2 * i) + 1] = '-';
            a[(2 * i) + 2] = '-';
        }
    }
    printf("The resultant Binary Tree\n");
    nodes = pow(size, 2) - 1;
    for (i = 0; i < nodes; i++)
    {
        printf("%c\t", a[i]);
    }

    return 0;
}