#include<stdio.h>
#include<stdlib.h>
#define MAX 5
 int front=-1;
 int rear=-1;
 int q[MAX];
 void enque()
 {
  int ele;
  printf("enter elements\n"):
  scanf("%d",&ele);
  if(rear==MAX-1)
  { printf("overflow\n"):
  return;
  }
  else
  {
   if(rear==-1)
   front=0;
   rear++;
   q[rear]=ele;
   }
   }
  int deque()
  {
  int x;
  if(front==-1)
   printf("underflow\n");
   else if(rear=front)
   {
    x=q[front];
    front=rear=-1;
    }
    else
    {
    x=q[front];
    front++;
    }
    return x;
    }
    void display()
    {
   int i;
   if(front==-1)
   {
 printf("empty\n");
 return;
 }
  printf("contents of queue\n");
  for(i=front;i<=rear;i++)
  {
  printf("%d\t",q[i]);
  }
  }
  void main()
  {
 int ele;
 int ch;
 while(1)
 {
  printf("\nenter\n1.enque\n2.deque\n3.display\n4.exit\n");
  scanf("%d",&ch);
  switch(ch)
  {
  case 1: enque();
          break;
  case 2:ele=deque();
         printf("deleted element is%d\n",ele);
         break;
  case 3:display();
         break;
  case 4:exit(1);
  default:printf("wrong\n");
  }
 }
 }
  
  

   
