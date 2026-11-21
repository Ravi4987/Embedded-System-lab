/*****************************************************CircularQueueUsingLinkedList**********************************************************************/
#include <stdio.h>
#include <stdlib.h>
#define Max 20

typedef struct link{
	int info;
	struct link *next;
	
}queue;

queue *f=NULL, *r=NULL,*temp;


int main() {
	int opt,x;
	void insert(int val);
	void delete();
	void display();
	
while(1)
{
	printf("\nEnter option\n");
	printf("1 for insertion\n");
	printf("2 for deletion\n");
	printf("3 for display\n");
	printf("4 for exit\n");
	printf("opt:");
	scanf("%d",&opt);
	
	
	switch(opt)
	{
		case 1:
			printf("Enter the element to inserted:");
			scanf("%d",&x);
			insert(x);
			break;
			
		case 2:
			delete();
			break;
			
		case 3:
			display();
			break;
			
		case 4:
			exit(0);
			break;
			
			
		default:
			printf("\nWrong option entered\n");
			break;
				
	}
	
	
	
	
	
	
	
}
		
	
	
	return 0;
}


void insert(int val)
{
	queue *p;
	
	p=(queue *)malloc(sizeof(queue));
	
	p->info=val;
//	p->next=NULL;
	
	
	
	if(f==NULL)
	{
		printf("Front is Null\n");
		f=p;
		
		
	}
	
	
		
	else{
		r->next=p;
		
	}	
		
		
		r=p;	
		p->next=f;
		
		
	printf("\n\nElement added Succesfully\n\n");

	
}

void delete()
{
	queue *q;
	
	int x;
	
	
	
	if(f==NULL)
	{
		printf("\n\nElement can not be deleted Queue is empty");
		
	  return;
		
		
	}
	
	else if(f==r)
	{
		
		
		printf("\n\nFront is equal to rear\n\n");
		printf("\n%d",f->info);
		f=r=NULL;
	
	
	
	
	}
	
	else
	{
		
		printf("\n\nFront is equal to rear\n\n");
		q=f;
		printf("\n%d",f->info);
		f=f->next;
		temp=r;
		temp->next=f;
		free(q);
		
		
	}
			
	
		
		
		
		
		
		printf("\n\nElement deleted Succesfully\n\n");
		
	
	
	
	
	
}


void display()
{
	


  if(f==NULL)  printf("\n\nQueue is Empty nothing to Display\n\n");
  else{
  		queue *temp=f;
		//  while(temp->next!=NULL)
		 while(temp->next!=f)
		  {
			  
			  printf("Element:%d\n",temp->info);
			  temp=temp->next;
			  
			  
		}
		
		printf("Element:%d\n",temp->info);	
  	
  	
  	
  }
	
	
	
	
}


