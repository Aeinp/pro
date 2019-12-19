#include<stdio.h>
#include<stdlib.h>
#define MAX 5
 int top=-1;
 int stack[MAX];
 int is_full()
 {
  if(top==MAX-1)
  {
   printf("overflow");
   return 1;
   }
   return 0;
   }
 int is_empty()
 {
  if(top==-1)
   {
   printf("underflow");
   return 1;
   }
  return 0;
 } 
  void push()
  {
   int x;
    
   if(!is_full())
    {
    printf("enter ele");
      scanf("%d",&x);
      top++;
      stack[top]=x;
      }
      }
   void pop()
   {
   if(!is_empty())
    {
     printf("\n %d",stack[top]);
     top--;
     }
     }
   void display()
   {
     int i;
      if(!is_empty())
      {
      for(i=top;i>=0;i--)
       printf("\n%d\n",stack[i]);
       }
       }
   void main()
   {
  int ch;
   while(1)
   {
  printf("\n enter\n 1.push\n2.pop\n3.display\n4.exit\n\n");
  scanf("%d",&ch);
   switch(ch)
   {
   case 1: push();
           break;
   case 2: pop();
           break;
   case 3: display();
           break;
   case 4:exit(0);
   default:printf("wonghg");
   }
   }
   }        
   
       
