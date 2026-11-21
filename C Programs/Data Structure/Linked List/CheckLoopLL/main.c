#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct Node {
	int data;
	struct Node *next;
}*first = NULL,*second=NULL,*third=NULL;

void create(int A[],int n)
{
	int i = 0;
	struct Node *temp,*last;
	
	first = (struct Node *)malloc(sizeof(struct Node));
	first->data = A[0];
	first->next = NULL;
	last = first;
	
	for(i=1;i<n;i++)
	{
		temp = (struct Node *)malloc(sizeof(struct Node));
		temp->data = A[i];
		temp->next = NULL;
		
		last->next = temp;
		last = temp;
	}
}

void create2(int B[],int n)
{
	int i = 0;
	struct Node *temp,*last;
	
	second = (struct Node *)malloc(sizeof(struct Node));
	second->data = B[0];
	second->next = NULL;
	last = second;
	
	for(i=1;i<n;i++)
	{
		temp = (struct Node *)malloc(sizeof(struct Node));
		temp->data = B[i];
		temp->next = NULL;
		
		last->next = temp;
		last = temp;
	}
}

int countLinkedListNodes(struct Node *p)
{
	int i=0;
	while(p!=NULL)
	{
		i++;
		p = p->next;
	}
	
	printf("Total Nodes:%d\r\n",i);
	
	return i;
}

int countLinkedListNodesUsingRecursive(struct Node *p)
{
	int i=0;
	if(p!=NULL)
	{
	    return countLinkedListNodesUsingRecursive(p->next) + 1;
	}
}


void DisplayLinkedList(struct Node *p)
{
//	printf("\r\n");
	while(p!=NULL)
	{
		printf("%d ",p->data);
		p = p->next;
	}
	
}

struct Node *LSearch(struct Node *p,int key)
{
	struct Node *q = NULL;
	while(p  != NULL)
	{
		if(p->data == key)
		{
			q = p;
		}
		
		p= p->next;
	}
	
	return q;
}

struct Node *RSearch(struct Node *p,int key)
{
	if(p == NULL)
	{
		return NULL;	    
	}
	else
	{
		if(p->data == key)
		{
			return p;
		}
		else
		{
			return RSearch(p->next,key);
		}
	}
	
}

void Insert(struct Node *p,int index,int x)
{
	struct Node *t = NULL;
	int i = 0;
	
	if(index < 0)
	{
		return;	
	}
	
	t = (struct Node *)malloc(sizeof(struct Node));
	t->data = x;
	t->next = NULL;
	
	if(index == 0)
	{
		t->next = first;
		first = t;
	}
	else
	{
		for(i=0;i<index-1;i++)
		{
			p =  p->next;
		}
		
		t->next = p->next;
		p->next = t;
	}
	
}


void delete(struct Node *p,int pos)
{
	struct Node *q=NULL;
	int i;
	
	if(pos == 0)
	{
		first = p->next;
		free(p);	
	}
	else
	{
		for(i=0;i<pos-1&&p;i++)
		{
			q=p;
			p = p->next;
		}
		if(p)
		{
			
			q->next = p->next;
			free(p);
		}
		
	}
			
}

void ConcatenateLL(struct Node *p,struct Node *q)
{	
	third = p;
	
	while(p->next != NULL)
	{
		p = p->next;
	}
	
	p->next = q;
}

void MergeLL(struct Node *p,struct Node *q)
{
	struct Node *last;
	
	if(p->data < q->data)  // Initializtion of third
	{
		third = last = p;
		p = p->next;
		last->next = NULL;
	}
	else
	{
		third = last = q;
		q = q->next;
		last->next = NULL;
	}
	
	while((p != NULL) && (q != NULL))
	{
		if(p->data < q->data)  // Initializtion of third
		{
			last->next = p;
			last = p;
			p = p->next;
			last->next = NULL;
		}
		else
		{
			last->next = q;
			last = q;
			q = q->next;
			last->next = NULL;
		}	
	}
	
	if(p != NULL)
	{
	  last->next = p;	
	}
	else
	{
		last->next = q;	
	}
}


bool isLoopLL(struct Node *f)
{
	struct Node *p,*q;
	
	p = q = f;
	
	do
	{
		 p = p->next;
		 q =  q->next;
		 q = (q==NULL)?q:q->next;
		
	}while((p != NULL) && (q != NULL) && (p != q));
		

	return (p==q);
}


int main(int argc, char *argv[]) {
	
   int A[] = {3,5,7,10,15};
   int B[] = {2,6,8,11,20};
   struct Node *t1,*t2;
   
	
    create(A,5);
    printf("\r\nFirst LL: ");
	DisplayLinkedList(first);
	
	create2(B,5);
	printf("\r\nSecond LL: ");
	DisplayLinkedList(second);	
	
	
	//Make first LL loop
	t1 =  first->next->next;			// pointing to 3rd element 7
	t2 = first->next->next->next->next; // pointing to last element 15
	t2->next = t1;  // last element pointing to 3rd element
	
	if(isLoopLL(first) == true)
	{
		printf("\r\n LOOP");	
	}
	else
	{
		printf("\r\n Linear");
	}
	
	if(isLoopLL(second) == true)
	{
		printf("\r\n LOOP");	
	}
	else
	{
		printf("\r\n Linear");
	}

	
	return 0;
}

