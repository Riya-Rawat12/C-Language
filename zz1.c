#include<stdio.h>
int s=0;
int c=0;
#define size 5
int queue[size];
int front=-1,rare=-1;
void enqueue(int x)
{
   if(front==-1 && rare==-1)
   {
       front =0,rare=0;
       queue[rare]=x;
   }
   else if((rare+1)%size==front)
   {
       printf("queue is full\n");
   }
   else {
       rare=(rare+1)%size;
       queue[rare]=x;
   }

}
void dequeue()
{
	if(front ==-1 && rare==-1)
	{
	    printf("queue is empty\n");
	}
	else if(front==rare)
	{
	    front=-1;
	    rare=-1;
	}
	else {
	    printf("dequeued element is==>%d\n",queue[front]);
	    front =(front+1)%size;
	}
	
}
void peek()
{
	    printf("%d\n",queue[front]);
}
void display()
{
	if(front==-1 && rare==-1)
	{
	    printf("queue is empty\n");
	}
	else{
	    int i=front;
	    while(i!=rare)
	    {
	        printf("%d ",queue[i]);
	        i=(i+1)%size;
	    }
	    printf("%d",queue[rare]);
	}
}
int main()
{
	printf("Riya Rawat\nSec-E\nStudent ID-20012105\n");
	while(1)
	{
		int n;
		printf("enter your choice\n");
		printf("1.enqueue 2.dequeue 3.peek 4.display\n");
		scanf("%d",&n);
		switch(n)
		{
			case 1: printf("enter element\n");
			int x;
			scanf("%d",&x);
			enqueue(x);
			break;
			case 2:s++;
			dequeue();
			break;
			case 3: peek();
			break;
			case 4: display();
			break;
			default :printf("%d %d",front,rare);
			return 0;
		}
		
	}
}