/*******************************************************************************
CREATOR : JITHIN JEROME
TITLE - CIRCULAR QUEUE.
DATE - MAY , 2022
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
int q[100], item, front, rear, n;
int front = -1;
int rear = -1;

void enqueue(int item)
{
    if ((front == 0 && rear == n - 1) || (front == rear + 1))
    {
        printf("Circular Queue is full!!");
    }
    else if (front == -1)
    {
        front = 0;
        rear = 0;
        printf("Enter the element to be inserted: ");
        scanf("%d", &item);
        q[rear] = item;
    }
    else
    {
        rear = (rear + 1) % n;
        printf("Enter the element to be inserted: ");
        scanf("%d", &item);
        q[rear] = item;
    }
}

void dequeue()
{
    if (front == -1)
    {
        printf("Circular Queue is empty!!");
    }
    else if (front == rear)
    {
        printf("The deleted element is %d", q[front]);
        front = -1;
        rear = -1;
    }
    else
    {
        printf("The deleted element is %d", q[front]);
        front = (front + 1) % n;
    }
}

void display()
{
    int i;

    if (front == -1)
    {
        printf("Circular Queue is empty!!");
    }
    else if (front <= rear)
    {
        for (i = front; i <= rear; i++)
        {
            printf("%d", q[i]);
        }
    }
    else
    {
        for (i = front; i <= (n - 1); i++)
        {
            printf("%d", q[i]);
        }
        for (i = front; i <= rear; i++)
        {
            printf("%d", q[i]);
        }
    }
}

int main()
{
    int ch;
    printf("\nCIRCULAR QUEUE OPERATIONS\n");
    printf("\n-------------------------------------------\n");
    printf("1.Insertion\n2.Deletion\n3.Display\n4.Exit");
    printf("\n-------------------------------------------\n");
    printf("\nEnter the size of the circular queue: ");
    scanf("%d", &n);

    while (1)
    {
        printf("\nEnter your choice: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            enqueue(item);
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
        }
    }

    return 0;
}