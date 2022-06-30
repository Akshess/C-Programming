#include<stdio.h>
void tower(int n,char beg,char aux,char end)
{
  if(n==1)
  { 
   printf("Move the disk 1 from %c to %c \n",beg,end);
   return;
    }
  tower(n-1,beg,end,aux); 
     printf("Move the disk %d from %c to %c \n",n,beg,end);
  tower(n-1,aux,beg,end);
 }
 
 main()
 {
   int num;
   printf("Enter the number of disks:\n");
   scanf("%d",&num);
   printf("The sequence of moves ivolved in the tower of hanoi are :\n");
   tower(num,'A','B','C');
  }
