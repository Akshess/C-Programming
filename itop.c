#include<stdio.h>
#include<ctype.h>
#include<math.h>
int stack[50],top = -1,elem;
void push()
{
  stack[++top] = elem;
 }
 
 main()
 {
   char postfix[50],choice;
   int i=0,op1,op2;
   printf("Enter a sufffix expression with single digit operand and operations :\n");
   scanf("%s",postfix);
   while((choice = postfix[i++])!='\0')
   {
     if(isalpha(choice))
     { 
       printf("Invalid expresssion");
       return;
      }
     else if (isdigit(choice))
     {
       push(choice-48);
      }
     else
     {
       op2 = stack[top--];
       if(top<=-1)
       {
         printf("Invalid expression\n");
          return;
         }
        op1 = stack[top--];
         switch(choice)
         { 
          case '+' : push(op1 + op2);
                     break;
           case '-': push(op1 - op2);
                     break;
          case '*' : push(op1 * op2);
                     break;
          case '/' : push(op1/op2);
                     break;
          case '%' : push(op1 % op2);
                     break;
          case '^' : push(pow(op1,op2));
                     break;        
          default : printf("Invalid operator \n");
                     return;
       } 
      }
     }
    if(top!=0)
    {
      printf("Invalid Expression\n");
      }
     else
     {
      printf("Result = %d \n",stack[top]);
      }
    }   
