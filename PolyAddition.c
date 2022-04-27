/*******************************************************************************
CREATOR : JITHIN JEROME
TITLE - POLYNOMIAL ADDITION USING LINKED LIST .
DATE - APRIL , 2022
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int i, n;
struct node
{
    int coeff;
    int expo;
    struct node *next;
};
struct node *phead, *qhead, *rhead;

struct node *readpoly()
{
    struct node *newnode, *temp, *head = NULL;
    printf("\nEnter the highest degree of the polynomial: ");
    scanf("%d", &n);
    printf("\nEnter coefficient & Exponents\n");
    for (i = 0; i <= n; i++)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter coefficient %d: ", i);
        scanf("%d", &newnode->coeff);
        printf("Enter exponent %d :", i);
        scanf("%d", &newnode->expo);
        newnode->next = NULL;

        if (head == NULL)
        {
            head = newnode;
            temp = head;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }
    }
    return (head);
}

void displaypoly(struct node *head)
{
    struct node *temp;
    if (head == NULL)
    {
        printf("Polynomial is empty");
    }
    else
    {
        temp = head;
        while (temp->next != NULL)
        {
            printf("%dX^%d+", temp->coeff, temp->expo);
            temp = temp->next;
        }
        printf("%dX^%d", temp->coeff, temp->expo);
    }
}

struct node *addpoly()
{
    struct node *newnode, *p, *q, *r, *head = NULL;
    p = phead;
    q = qhead;

    while (p != NULL && q != NULL)
    {
        if (p->expo == q->expo)
        {
            newnode = (struct node *)malloc(sizeof(struct node));
            newnode->coeff = p->coeff + q->coeff;
            newnode->expo = p->expo;
            newnode->next = NULL;
            p = p->next;
            q = q->next;
        }
        else if (p->expo > q->expo)
        {
            newnode = (struct node *)malloc(sizeof(struct node));
            newnode->coeff = p->coeff;
            newnode->expo = p->expo;
            newnode->next = NULL;
            p = p->next;
        }
        else
        {
            newnode = (struct node *)malloc(sizeof(struct node));
            newnode->coeff = q->coeff;
            newnode->expo = q->expo;
            newnode->next = NULL;
            q = q->next;
        }
        if (head == NULL)
        {
            head = newnode;
            r = head;
        }
        else
        {
            r->next = newnode;
            r = newnode;
        }
    }
    while (p != NULL)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        newnode->coeff = p->coeff;
        newnode->expo = p->expo;
        newnode->next = NULL;
        if (head == NULL)
        {
            head = newnode;
            r = head;
        }
        else
        {
            r->next = newnode;
            r = newnode;
        }
        p = p->next;
    }
    while (q != NULL)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        newnode->coeff = q->coeff;
        newnode->expo = q->expo;
        newnode->next = NULL;
        if (head == NULL)
        {
            head = newnode;
            r = head;
        }
        else
        {
            r->next = newnode;
            r = newnode;
        }
        q = q->next;
    }
    return (head);
}
int main()
{
    printf("\nEnter the details of First Polynomial:");
    phead = readpoly();
    printf("\nEnter the details of Second Polynomial:");
    qhead = readpoly();

    printf("\nFirst Polynomial");
    displaypoly(phead);
    printf("\nSecond Polynomial");
    displaypoly(qhead);

    rhead = addpoly();
    printf("\nResultant Polynomial\n");
    displaypoly(rhead);

    return 0;
}