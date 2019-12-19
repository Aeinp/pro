#include<stdio.h>
#define max 5
int cq[max];
int f=-1;
int r=-1;

int isfull()
{
   if((f==r+1) || (f==0 && r== max-1))
   return 1;
   return 0;
 }  
  int isempty()
  {
     if(f==-1)
     return 1;
     return 0;
   }
   
  void eq(int x)
  {
     if(isfull())
     printf("queue overflow\n");
     else
     {
        if(f== -1)
        f=0; 
        r=(r + 1)%max;
        cq[r] =x;
        printf("\n inserted element is %d",x);
  }
      }  
 int dq()
 {  int x;
    if(isempty())
  {  printf("queue underflow\n");
    return -1;
   } 
   else
    { 
       x=cq[f];
       if(f==r)
       f=r=-1;
       else
       f=(f+1)%max;
    }
    return x;
 }
 
 void display()
 {int i;
    if(isempty())
    printf("queue underflow\n");
    else
    {
      for(  i=f; i!=r+1;i=(i+1)%max)
      {
         printf("%d",cq[i]);
       }
        }}
   
   void main()
   {
      int ch ,x;
      while(1)
      {
         printf("\nenter the choice\n");
         scanf("%d",&ch);
         switch(ch)
         {
           case 1: printf("enter the no to be inserted\n");
                        scanf("%d",&x);
                        eq(x);
                        break;
            case 2: x=dq();
                         printf("deleted element is:%d",x);
                         break;
            case 3:
                        display();
                        break;
             default : printf("invalid choice");
         }
      }
   }                                                      
             
