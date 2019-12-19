#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#define MAX 20
struct stack
	{
	 int top;
	 int item[MAX];
	 };
 typedef struct stack stk;
 stk st;

  int pop(stk *opstk)
  {
  if(opstk->top!=-1)
  return opstk->item[opstk->top--];
  }	 
   void push(stk *opstk,int x)
  {
  if(opstk->top!=19)
  {
 opstk->item[++opstk->top]=x;
 }
 }
  void posteval(char *pos,stk *opstk)
  {
   int i,val,op1,op2,j;
   char ch;
   for(i=0;pos[i]!='\0';i++)
   {
   ch=pos[i];
   if(isdigit(ch))
   push(opstk,(int)(ch-'0'));
   else
   {
    op1=pop(opstk);
    op2=pop(opstk);
    switch(ch)
    {
    case '+': val=op2+op1;
             push(opstk,val);
             break;
    case '-': val=op2-op1;
             push(opstk,val);
             break;
     case '*': val=op2*op1;
             push(opstk,val);
             break;  
      case '/': val=op2/op1;
             push(opstk,val);
             break;               
    case '$': for(j=2;j<=op1;j++)
                op2*=op2;
                val=op2;
                push(opstk,val);
             break;
   default:printf("wrong\n ");
   }
   }
   }
   printf("result:%d\n",pop(opstk));
   }
 void main()
   {
  st.top=-1;
  char pos[MAX];
  stk opstk;
  printf("enter valid exp\n");
  scanf("%s",pos);
  posteval(pos,&opstk);
  }

