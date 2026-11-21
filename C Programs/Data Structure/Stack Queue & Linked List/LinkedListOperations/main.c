/***********************************************LinkedListOperations**************************************************************/
#include <stdio.h>
#include <stdlib.h>

typedef struct Linked_list{
	
	int info;
	
	struct Linked_list *next;	
	
}node;

node *head=NULL;


void create();
void insert_at_begin(int nx);
void insert_in_middle(int n,int nx);
void insert_at_end(int nx);
void search(int nx);
void trav();
void del(int nx);


int main() {
	
	
	int choice,j,nx,n;
	
	
	
	while(1)
	{
		
			printf("\nEnter Choice\n");
			printf("1 For Creation\n");
			printf("2 For Traversing\n");
			printf("3 For Insertion\n");
			printf("4 For Deletion\n");
			printf("5 For Searching\n");
			printf("6 For Exit\n");
			printf("Opt:");
			scanf("%d",&choice);
			
			
			switch(choice)
			{
				
					case 1:
						create();
						break;
						
						
					case 2:
						trav();
						break;
						
						
					case 3:
						printf("\nEnter the value of element you want to insert:");
						scanf("%d",&nx);
						printf("\nEnter opt for insertion described as follows\n");
						printf("\n1 for insertion at begining\n");
						printf("\n2 for insertion at middle\n");
						printf("\n3 for insertion at end\n");
try:						printf("\nopt:");
						scanf("%d",&j);
							switch(j)
							{
								case 1:
									insert_at_begin(nx);
									break;
									
								case 2:
									printf("\nEnter the element after which you want to insert:");
									scanf("%d",&n);
									insert_in_middle(n,nx);
									break;
									
								case 3:
									insert_at_end(nx);
									break;
									
								default:
									printf("\nWrong opt entered\n");
									printf("\nTry agin\n");
									goto try;
									break;
								
								
							}
						break;
						
					case 4:
						printf("\nEnter the value of element you want to delete:");
						scanf("%d",&nx);
						del(nx);
						break;
						
					case 5:
						printf("\nEnter the value of element you want to Search:");
						scanf("%d",&nx);
						search(nx);
						break;
						
					case 6:
						exit(0);
						break;
						
						
					default:
						printf("Wrong Choice entered\n");
						break;
							
				
				
				
				
				
				
				
				
				
				
			}
			
			
		
		
		
		
		
	}
	
	
	
	
	return 0;
}



void create()
{
	int a,nx;
	
	int i=1;
	
	node *p;
	
	p=head;
	
	do{
		
		printf("\nEnter Element info:");
		scanf("%d",&nx);
		
		if(i==1)
		{
			
			insert_at_begin(nx);
			printf("\nInserted at first Head\n");
			i=0;			
		}
		
		else
		{
			insert_at_end(nx);
			printf("\nInserted at end\n");
			
			
			
		}
		
		printf("\n Enter 0 to exit or any other number to continue:");
	    scanf("%d",&a);
		
	}while(a!=0);
		
}

void insert_at_begin(int nx)
{
	node *p;
	p=(node *)malloc(sizeof(node));
	p->info=nx;
	p->next=head;
	
	head=p;
	
	
}


void insert_in_middle(int n,int nx)
{
	node *p,*q;
	int flag=0;
	
	p=(node *)malloc(sizeof(node));
	p->info=nx;
	
	q=head;
	
	
	while(q!=NULL)
	{
		if(q->info==n)
		{
		  	p->next=q->next;
			q->next=p;
			printf("\nElement succesfully inserted\n");
			return;
			
		}
		
		q=q->next;
	}
	
	
		printf("\nNumber Not found\n");
	
	
	
}

void insert_at_end(int nx)
{
	node *p,*q;
	
	p=(node *)malloc(sizeof(node));
	p->info=nx;
	p->next=NULL;
	
	q=head;
	
	while(q->next!=NULL)
	{
		q=q->next;
	}
	
	q->next=p;
	
	
}

void search(int nx)
{
	node *p;
	
	
	if(head=NULL)
	{
		printf("\nList is Empty\n");
		return;
		
		
	}
	
	p=head;
	
	while(p!=NULL)
	{
		if(p->info==nx)
		{
			printf("\nElement is found at %d Address\n",p);
			return;
		}
		
	  p->next;	
	}
	
	printf("\nElement not found\n");
	
	
	
}


void trav()
{
	node *p;
	
	p=head;
	
	if(head==NULL) 
	{
		printf("\nList is empty\n");
		return;
		
		
		
	}
	
	printf("\nElement are \n\n");
	
	while(p!=NULL)
	{
		
		printf("%d\t",p->info);
		p=p->next;
		
	}
	
	printf("\n\n\n");
	
}

void del(int nx)
{
	node *p,*q;
	
	p=head;
	
	if(head=NULL) 
	{
		printf("\nList is empty\n");
		return;		
	}
	
	if(p->info==nx)
	{
		printf("\nElement find at firstHead\n");
		head=p->next;
		free(p);
		return;
		
		
	}
	
	while(p!=NULL&&p->info!=nx)
	{
		
		q=p;
		p=q->next;

		
	}
	
	if(p->info==nx)
	{
		q->next=p->next;
		free(p);
		printf("\nElement is succesfully deleted\n");
		
	}
	
	else
	{
		printf("\nElement not found\n");
		
		
	}
	
	
	
	
	
	
	
}


