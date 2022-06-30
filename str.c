#include<stdio.h>
char ans[100],str[100],pat[100],rep[100];
int i,j,k,l,p,flag;
void matchpattern()
  {
    while(str[i] != '\0')
     { 
        if(str[j] == pat[p])
        { 
           j++;
            p++;
         if(pat[p] == '\0')
         {
           flag = 1;
         for(k=0;rep[k]!='\0'; k++,l++)
         {
           ans[l] = rep[k];
            }
            p = 0;
            i=j;
            }
           }
      
       else 
       { 
          ans[l] = str[i];
           p = 0;
           l++;
           i++;
           j=i;
        }
      }
     ans[l] = '\0';
     }
     
    void read()
    {
      printf("Enter the Main string :\n");
      scanf("%[^\n]",str);
      printf("Enter the pattern String :\n");
      scanf("%*c%[^\n]",pat);
      printf("Enter the replace string:\n");
      scanf("%*c%[^\n]",rep);
      
      }
      
    void main()
    {
       read();
       matchpattern();
       if(flag ==0)
       {
         printf("Pattern not found !!\n");
         }
        else
        {
          printf("The Resultant string is \n %s \n",ans);
          }
          
         }
            
