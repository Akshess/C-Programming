#include<stdio.h>
#include<stdlib.h>
int key,m,n,*ht,hi,elec,flag;
void createht()
{
  int i;
  ht = (int *)malloc(m * sizeof(int));
  if(m == 0)
  {
    printf("Unable to create hash table\n");
    exit(0);
   }
  else
  {
    for(i=0;i<m; i++)
    {
      ht[i] = -1;
     }
   }
  }
  void insertht()
  {
    hi = key % m ;
    while(ht[hi]!= -1)
    {
       hi = (hi +1 ) % m;
       flag = 1;
       }
     if(flag)
     {
       printf("Collision detected and avoided buy linear probing !\n");
       }
       ht[hi] = key;
       elec++;
      }
    void displayht()
   {
     int i;
     if(elec == 0)
     {
       printf("Hash table is empty");
       return;
       }
      printf("Hash Table contents are: \n");
      for(i = 0;i<m ; i++)
      {
        printf("[%d]->%d\n",i,ht[i]);
       }
       }
     void main()
     {
        int i;
        printf("Enter the number of employee records!");
        scanf("%d",&n);
        printf("Enter the two digit memory locations:");
        scanf("%d",&m);
        createht();
        printf("Enter four sigit key values of emplyees records ;\n");
        for(i = 0;i<n;i++)
        {
         scanf("%d",&key);
         if(elec == m)
         {
           printf("Hash table is full \n");
           break;
           }
          insertht();
          }
          displayht();
          }

