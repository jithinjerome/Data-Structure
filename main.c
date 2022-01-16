/*******************************************************************************
CREATOR : JITHIN JEROME
TITLE - Stack Operations.
DATE - JANUARY , 2022
*******************************************************************************/



#include<stdio.h>
#include<stdlib.h>
int stack[100],choice,n,top,x,i,j ;
void push(void);
void pop(void);
void display(void);
int main()
{
top=-1 ;
printf("Enter the size : \n");
scanf("%d",&n);
printf("Stack operations : \n");
printf("1:Push\n2.Pop\n3.Display\n4.Exit\n");

do{
   printf("\nEnter choice\n");
   scanf("%d",&choice);
   switch(choice)
   {
     case 1 :
     {
       push() ;
       break ;
     }
      case 2 :
     {
       pop() ;
       break ;
     }
     case 3 :
     {
       display() ;
       break ;
     }
      case 4 :
     {
       printf("\nExited..\n");
       break ;
     }
     default :
     {
     printf("Enter a valid choice");
     }
    }
    }while(choice!=4);
  }
  void push()
    {
    if(top>=n-1)
    {
    printf("Stack over flow");
    }
    else
    {
      printf("Enter value to be pushed:");
      scanf("%d",&x);
      top ++ ;
      stack [top]=x ;
    }
    }
    void pop()
    {
      if(top<=-1)
      {
       printf("Stack underflow\n");
      }
      else
      {
      printf("The poped element is %d\n",stack[top]);
      top-- ;
      }
    }
    void display()
    {
     if(top>=0)
     {
      printf("The element in stack:\n");
      for(i=0;i<=top;i++)
      {
      printf("%d",stack[i]);
      }
     }
     else{
     printf("Stack is empty\n");
     }
    }
