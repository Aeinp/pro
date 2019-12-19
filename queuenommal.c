#include<stdio.h>
#include<stdlib.h>
	int a[50];
	int f;
	int r;
void enqu()
{
	int x;
 	printf("enter elements\n");
	scanf("%d",&x);
	if(r==49)
	{
		printf("overflow\n");
		return;
	}
	
	else 
	{
		if(r==-1)
	         f=0;
		r++;
		a[r]=x;
		 
	}
}

int dequ()
{
 	int x;
 	if(f==-1)
	{
		printf("underflow\n");
		return;
	}
	else if(f==r)
		{ x=a[f];
			f=-1;
			r=-1;
		}
	else
	{
		x=a[f];//printf("\nDeleted item is: %d\n",a[f]);
		f++;
	}
	return x;
}

void display()
{
	int i;
 	if(f==-1||r==-1)
	{
 		printf("queue is empty\n");
  		return;
	}
 	else
	{
 		printf("contents of queue\n");
 		for(i=f;i<=r;i++)
 		{
		   	printf("%d\t",a[i]);
		}
	}
}

void main()
{
	/*queue q;//queue *q
	q.r=-1;//q->r=-1
	q.f=-1;//q->f=-1*/
	
 	int ch,ele;
 	while(1)
 	{
 		printf("\nenter choice\n1.enque\n2.deque\n3.dispaly\n4.exit\n");
 		scanf("%d",&ch);
 		switch(ch)
 		{
 			case 1: enqu();//enqueue(q)
		  	break;
		  	
			case 2: ele=dequ();
			         printf("deleted elements is %d\n",ele);
		 	break;
		 	
			case 3: display();
		 	break;
		 	
			case 4: exit(1);
			default: printf("wrong choice\n");
		}
	}
}

  

 

