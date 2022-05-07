/*******************************************************************************
CREATOR : JITHIN JEROME
TITLE - Hash Table .
DATE - APRIL , 2022
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

struct set
{
    int key;
    int data;
};
struct set a[10];
int size = 10;

void insert(int key, int data)
{
    int index = key % size;
    if (a[index].data == -1)
    {
        a[index].key = key;
        a[index].data = data;
    }
    else
    {
        printf("\nCollision Occured");
    }
}

void delete (int key)
{
    int index = key % size;
    if (a[index].data = -1)
    {
        printf("\nThere does not exist key\n");
    }
    else
    {
        a[index].key = -1;
        a[index].data = -1;
    }
}

void display()
{
    int i;
    for (i = 0; i < size; i++)
    {
        if (a[i].data == -1)
        {
            printf("\n a[%d]: /", i);
        }
        else
        {
            printf("\n a[%d]: (%d %d)\t", i, a[i].key, a[i].data);
        }
    }
}

int main()
{
    int choice, key, data, n, i;
    for (i = 0; i < size; i++)
    {
        a[i].key = -1;
        a[i].data = -1;
    }
    do
    {
        printf("\n1.Insertion\n2.Deletio\n3.Display\n4.Exit\n\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter the key: ");
            scanf("%d", &key);
            printf("Enter the data: ");
            scanf("%d", &data);
            break;
        case 2:
            printf("Enter the key to delete: ");
            scanf("%d", &key);
            delete (key);
            break;
        case 3:
            display();
            break;
        }
    } while (choice != 4);

    return 0;
}