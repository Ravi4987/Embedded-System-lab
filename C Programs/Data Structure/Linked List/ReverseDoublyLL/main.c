#include <stdio.h>
#include <stdlib.h>

struct Node
{
	struct Node *prev;
	int data;
	struct Node *next;
}*first=NULL;


void createDoublyLL(int A[],int n)
{
	struct Node *t,*last;
	int i=0;
	
	t = (struct Node *)malloc(sizeof(struct Node));
	t->data = A[0];
	t->next = t->prev = NULL;
	first = last = t;
	
	for(i=1;i<n;i++)
	{
		t = (struct Node *)malloc(sizeof(struct Node));
		t->data = A[i];
		t->next = last->next;
		t->prev = last;
		last->next = t;
		last = t;
	}
}

void display(struct Node *p)
{	
	while(p != NULL)
	{
		printf("%d ",p->data);
		p = p->next;
	}
	
	printf("\r\n");
}

int length(struct Node *p)
{
	int len = 0;
	
	while(p != NULL)
	{
		len++;
		p = p->next;
	}

  return len;	
}

void insert(struct Node *p,int index,int x)
{
	struct Node *t=NULL;
	int i=0;
	
	if((index < 0)  || (index > length(p)))
	{
		return;
	}
	
	if(index == 0)
	{
		t = (struct Node *)malloc(sizeof(struct Node));
		t->data = x;
		t->next= first;
		first->prev = t;
		t->prev = NULL;
		first = t;	
	}
	else
	{
		for(i = 0;i<index-1;i++)
		{
			p= p->next;
		}
		
		t = (struct Node *)malloc(sizeof(struct Node));
		t->data = x;
		
		t->next = p->next;
		t->prev = p;
		if(p->next != NULL)
		{
			p->next->prev = t;
		}
		p->next = t;
	}
	
}

int delete(struct Node *p,int index)
{
	int x = -1;
	int i = 0;
	
	if((index < 1)  || (index > length(p)))
	{
		return;
	}
	
	if(index == 1)
	{
		first = first->next;
		if(first != NULL)
		{
			first->prev = NULL;
		}
		
		x= p->data;
		free(p);
		
	}
	else
	{
		for(i=0;i<index-1;i++)
		{
			p = p->next;
		}
		
		p->prev->next = p->next;
		
		if(p->next != NULL)
			p->next->prev= p->prev;
		
		x= p->data;
		free(p);
	}
	
	return x;
}

void Reverse(struct Node *p)
{
	struct Node *temp;
	
	while(p != NULL)
	{
		temp = p->next;  //swapping
		p->next = p->prev;
		p->prev = temp;
		p = p->prev;
		
		
		if((p != NULL) && (p->next == NULL) ) // first check null condition the p->next condition or fault occur
		{
			first = p;
		}	
	}
}

int main(int argc, char *argv[]) {
	int A[] = {10,7,8,9,45};
	
	createDoublyLL(A,5);
	
	display(first);
	
	Reverse(first);
	display(first);
		
	return 0;
}
