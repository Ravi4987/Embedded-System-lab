#include <stdio.h>
#include <stdlib.h>

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

int main(int argc, char *argv[]) {
	
   int A[] = {3,5,7,10,15};
   int B[] = {2,6,0,11,20};
   
	
    create(A,5);
    printf("\r\nFirst LL: ");
	DisplayLinkedList(first);
	
	create2(B,5);
	printf("\r\nSecond LL: ");
	DisplayLinkedList(second);	
	
	ConcatenateLL(first,second);
	
	printf("\r\nSThird LL: ");
	DisplayLinkedList(third);	
	
	
	
	return 0;
}

