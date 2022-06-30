#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#define max_size 4
int front = -1 , rear = 0;
char queue[max_size],item,elem;
void insert();
void delet();
void display();
void exit();
main()
{
  int ch;
  while(1)
  {
   printf("1.Insert\n 2.Delte\n 3.Display\n 4.Exit\n");
  scanf("%d",&ch);
  switch(ch)
  {
    case 1: insert();
             break;
    case 2: delet();
             break;
    case 3: display();
             break;
    case 4: exit(0);
    default:
     printf("Invalid choice");
    }
  }
 }
void insert()
{
  if(front == ((rear +1) % max_size))
  {
	printf("Queue is full \n");
	}
  else 
  {
    rear = ((rear + 1) % max_size) ;
    printf("Enter the element: \n");
    scanf("%*c",elem);
    queue[rear] = elem;
      }
     }
 void delet()
 {
   if (front == -1)
    {
      printf("Queue is empty\n");
       }
    else 
    {
      item = queue[front];
      printf("The deleted element is %d",item);
      if(rear == front)
      {
       rear = -1;
       front = -1;
         }
       else
        {
         front = ((front + 1) % max_size);
          }
       }
     }
 void display()
 {
   int i;
    if(front == -1)
      {
        printf("Queue is empty \n");
       }
     else 
     { 
       i = front ;
       printf("Queue elements are :\n");
       while(i != rear )
       {
         printf("%d",queue[i]);
         i = ((i+1) % max_size);
        }
        printf("%d\n",queue[i]);
     }
   }

