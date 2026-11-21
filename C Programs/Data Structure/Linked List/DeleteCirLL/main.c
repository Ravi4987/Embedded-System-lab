#include <stdio.h>
#include <stdlib.h>

struct Node 
{
	int data;
	struct Node *next;
}*Head;

void createCirLL(int A[],int n)
{
	struct Node *last=NULL;
	struct Node *t =NULL;
	int i;
	
	
	Head = (struct Node *)malloc(sizeof(struct Node));
	Head->data = A[0];
	Head->next = Head;
	last = Head;
	
	for(i=1;i<n;i++)
	{
		t = (struct Node *)malloc(sizeof(struct Node));
		t->data =  A[i];
		t->next = last->next; // last is pointing to head
		last->next = t;  // last element will point to new element
		last = t; // new element become last
	}	
}

void DisplayCirLL(struct Node *p)
{
	do
	{
		printf("%d ",p->data);
		p = p->next;
	}while((p != NULL) && (p != Head));
	
	printf("\r\n");
}

void RDisplayCirLL(struct Node *p)
{
	static int flag = 0;
	
	if((p != Head) || (flag == 0))
	{
		flag = 1;
		printf("%d ",p->data);
		RDisplayCirLL(p->next);
	}
}

int lengthLL(struct Node *p)
{
	int len = 0;
	do
	{
		len++;
		p = p->next;
	}while((p != NULL) && (p != Head));
	
	return len;
}

void InsertCirLL(struct Node *p, int index,int x)
{
	struct Node *t= NULL;
	int i = 0;
	
	if((index < 0) || (index > lengthLL(p)))
	{
		return;
	}
	
	if(index == 0)
	{
		t = (struct Node *)malloc(sizeof(struct Node));
		t->data=  x;
		
		if(Head == NULL)
		{
			Head = t;
			Head->next = Head;
		}
		else
		{
			while(p->next != Head)
			{
				p = p->next;
			}
			
			p->next = t;
			t->next = Head;
			Head = t;
		}
	}
	else
	{
		for(i=0;i<index-1;i++)
		{
			p = p->next;
		}
		
		t = (struct Node *)malloc(sizeof(struct Node));
		t->data=  x;
		
		t->next = p->next;
		p->next = t;		
	}
}

int delete(struct Node *p, int index)
{
	struct Node *t= NULL;
	int i = 0;
	int x;
	
	if((index < 0) || (index > lengthLL(p)))
	{
		return;
	}
	
	if(index == 1)
	{
		while(p->next != Head)
		{
			p = p->next;
		}
		
		if(p == Head) // Only one element present in Circular LL
		{
			x= Head->data;
			free(Head);
			Head = NULL;		
		}
		else
		{
			p->next = Head->next;
			x = Head->data;
			free(Head);
			Head = p->next;
		}	
	}
	else
	{
		for(i = 0;i<index - 2;i++)
		{
			p = p->next;
		}
		
		t = p->next;
		p->next = t->next;
		x = t->data;
		free(t);
	}
	
	return x;
}

int main(int argc, char *argv[]) {
	int A[] = {10,20,1,4,5};
	
	createCirLL(A,5);
	
	DisplayCirLL(Head);
	
	delete(Head, 2);
	DisplayCirLL(Head);
	

	delete(Head, 3);
	RDisplayCirLL(Head);
	
	return 0;
}
