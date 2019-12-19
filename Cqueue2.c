#include<stdio.h>
#define size 5

typedef struct queue
{
	int a[size],f,r;
}qu;

int count=0;

void rear_insert(qu *q,int num,int *f,int *r)
{
	if(count==size)
	 {
		 printf("Queue overflow\n");
	 	return;
	 }
	 *r=(*r+1) % size;
	 q->a[*r]=num;
	 count+=1;
}
void front_delete(qu *q,int *f,int *r)
{
	 if(count==0)
	 {
	 	printf("Queue underflow\n");
	 	return;
	 }
	 printf("The deleted element is %d\n", q->a[*f]);
	 *f=(*f+1) % size;
	 count-=1;
}
void display(qu *q,int *f, int *r)
{
	 int i,j;
	 if(count==0)
	 {
	 printf("Queue is empty\n");
	 return;
	 }
	 printf("The contents of the queue are:\n");
	 i=*f;
	 for(j=1;j<=count; j++)
	 {
	 printf("%d\n", q->a[i]);
	 i=(i+1) % size;
	 }
	 printf("\n");
}
int main()
{
	 int choice, num;
	 qu q;
	 q.f=0;
	 q.r=-1;
	 
	 while(choice!=4)
	 {
		 printf("\n1. Insert at front\n");
		 printf("2. Delete at rear end\n");
		 printf("3. Display\n");
		 printf("4. Exit\n");
		 printf("\nEnter your choice\n");
		 scanf("%d", &choice);
		 switch(choice)
	 	{	
		 	case 1: printf("\nEnter the number to be inserted\n");
					scanf("%d", &num);
					rear_insert(&q,num,&q.f,&q.r);
					break;
	 		case 2: front_delete(&q,&q.f,&q.r);
					break;
	 		case 3: display(&q,&q.f,&q.r);
					break;
	 		case 4: break;
	 		
	 		default: printf("Wrong Choice!! Enter valid choice!\n");
	 				 break;
 		}
 	}	
}
