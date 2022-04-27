
/*******************************************************************************
CREATOR : JITHIN JEROME
TITLE - LINKED LIST .
DATE - APRIL , 2022
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL, *temp;

void insert_begin(int item)
{
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = item;
    newnode->next = NULL;
    if (head == NULL)
    {
        head = newnode;
    }
    else
    {
        newnode->next = head;
        head = newnode;
    }
}

void insert_end(int item)
{
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = item;
    newnode->next = NULL;

    if (head == NULL)
    {
        head = newnode;
    }
    else
    {
        temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newnode;
    }
}

void insert_position(int item, int pos)
{
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = item;
    if (head == NULL)
    {
        head = newnode;
    }
    else
    {
        temp = head;
        while (temp->data != pos)
        {
            temp = temp->next;
        }
        newnode->next = temp->next;
        temp->next = newnode;
    }
}

void del_begin()
{
    if (head == NULL)
    {
        printf("Deletion is not possible");
    }
    else
    {
        temp = head;
        head = head->next;
        temp->next = NULL;
        free(temp);
    }
}

void del_end()
{
    if (head == NULL)
    {
        printf("Deletion is not possible");
    }
    else
    {
        struct node *prev;
        temp = head;
        while (temp->next != NULL)
        {
            prev = temp;
            temp = temp->next;
        }
        if (temp == head)
        {
            head = NULL;
        }
        else
        {
            prev->next = NULL;
        }
        temp->next = NULL;
        free(temp);
    }
}

void del_pos(int pos)
{
    if (head == NULL)
    {
        printf("Deletion is not possible");
    }
    else
    {
        struct node *prev;
        temp = head;
        while (temp->data != pos)
        {
            prev = temp;
            temp = temp->next;
        }
        prev->next = temp->next;
        free(temp);
    }
}

void display()
{
    if (head == NULL)
    {
        printf("List is Empty");
    }
    else
    {
        temp = head;
        while (temp != NULL)
        {
            printf("-> %d", temp->data);
            temp = temp->next;
        }
        printf("\n");
    }
}

void main()
{
    int ch, item, pos;
    printf("\nLINKED LIST OPERATIONS");
    printf("\n----------------------------------------\n");
    printf("1.Insert at Begining\n2.Insert at End\n3.Insert after Specified Position\n4.Delete from begining\n5.Delete from End\n6.Delete after Specified Position\n7.Exit");
    printf("\n----------------------------------------\n");

    while (1)
    {
        printf("Enter the Choice\n");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
        {
            printf("Enter the Element to be inserted ");
            scanf("%d", &item);
            insert_begin(item);
            display();
            break;
        }
        case 2:
        {
            printf("Enter the Element to be inserted ");
            scanf("%d", &item);
            insert_end(item);
            display();
            break;
        }
        case 3:
        {
            printf("Enter the Element to be inserted ");
            scanf("%d", &item);
            printf("Enter the position ");
            scanf("%d", &pos);
            insert_position(item, pos);
            display();
            break;
        }
        case 4:
        {
            del_begin();
            display();
            break;
        }
        case 5:
        {
            del_end();
            display();
            break;
        }
        case 6:
        {
            printf("Enter the Element to be deleted ");
            scanf("%d", &pos);
            del_pos(pos);
            display();
            break;
        }
        case 7:
        {
            exit(0);
        }
        }
    }
}