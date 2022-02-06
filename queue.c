
/*******************************************************************************
CREATOR : JITHIN JEROME
TITLE - STACK OPERATIONS.
DATE - JANUARY , 2022
*******************************************************************************/
#include <stdio.h>
#include<stdlib.h>
#define MAX 50
void enqueue();
void dequeue();
void display();
int queue_array[MAX];
int rear = -1,front = - 1,n,choice;
int main()
{
printf("Enter the size:\n");
scanf ("%d",&n);
printf("Queue Operations");
printf("\n1.Insert\n2.Delete\n3.Display\n4.Quit\n");
do{
   printf("Enter your choice :\n ");
   scanf("%d", &choice);
   switch(choice)
   {
     case 1:
        enqueue();
        break;
     case 2:
        dequeue();
        break;
     case 3:
        display();
        break;
     case 4:
        printf("\nExited...\n");
        break;
     default:
        printf("Invalid choice \n");
   }
  }while(choice!=4);
}
void enqueue()
 {
  int item;
  if(rear == n - 1)
    {printf("Queue Overflow \n");}
  else
    {
     if(front== - 1)
     front = 0;
     printf("Insert the element in queue :\n ");
     scanf("%d", &item);
     rear = rear + 1;
     queue_array[rear] = item;
    }
 }
void dequeue()
 {
  if(front==-1||front>rear)
    {
     printf("Queue Underflow \n");
     return;
    }
  else
    {
     printf("Element deleted from queue is : %d", queue_array[front]);
     front = front + 1;
    }
 }
void display()
 {
  int i;
  if(front == - 1)
  printf("Queue is empty \n");
  else
   {
    printf("Queue = ");
    for(i=front;i<= rear;i++)
    printf("%d ", queue_array[i]);
    printf("\n");
   }
 }