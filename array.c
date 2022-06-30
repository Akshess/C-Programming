#include<stdio.h>
#include<stdlib.h>
int i,n,a[30],pos,m;
void create();
void display();
void insert();
void dlt();
void exit();
void main()
{
  int ch;
   while(1)
 
 {      
     printf("\n 1.Create \n 2.Display \n 3. Insert \n 4.Delete \n 5.Exit\n");
        scanf("%d",&ch);
       switch(ch)
       {
          case 1: create();
          break;
          case 2: display();
          break;
          case 3: insert();
          break;
          case 4: dlt();
          break;
          case 5: exit(0);
          default:
           printf("Invalid Choice\n");
                   }
  }   
}
void create()
{
  printf("Enter the number of elements :\n");
  scanf("%d",&n);
  printf("Enter the elements :\n");
  for(i=0;i<n;i++)
   { 
       scanf("%d",&a[i]);
      }
  }
  
  void display()
  {
    for(i=0;i<n;i++)
    {
      printf("%d \t",a[i]);
     }
   }
   
   void insert()
   {
      printf("Enter the position:");
      scanf("%d",&pos);
      pos--; 
      if(pos>=0 && pos<n)
      {
        printf("enter the number u want to insert\n");
         scanf("%d",&m);
              
         for(i=n-1;i>=pos;i--)
          {
             a[i+1]=a[i];         
        }  
        a[pos] = m;
        n++;
    }	
    else
        {
          printf("Invalid position\n");
        }
   }
   
   void dlt()
   {
      printf("Enter the position:\n");
      scanf("%d",&pos);
      pos--;
      m = a[pos];
      if(pos>=0 && pos<n)
      { 
         for(i=n-1;i>pos;i--)
          {
           a[i+1] = a[i];
                      
        }   
        }
      else
      {
         printf("Invalid position\n");
           }
       printf("Deleted element is %d\n",m);
    
  
     }
