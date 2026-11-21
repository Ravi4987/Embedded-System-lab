#include <stdio.h>
#include <stdlib.h>

struct Node {
	int data;
	struct Node *next;
}*first = NULL,*last=NULL;



void create(int A[],int n)
{
	int i = 0;
	struct Node *temp;
	
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

int countLinkedListNodes(struct Node *p)
{
	int i=0;
	while(p!=NULL)
	{
		i++;
		p = p->next;
	}
	
//	printf("Total Nodes:%d\r\n",i);
	
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
	printf("\r\n");
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
	 struct Node *t;
	 int i;
	
	 if(index < 0 || index > countLinkedListNodes(p))
	  return;
	 
	 t=(struct Node *)malloc(sizeof(struct Node));
	 t->data=x;
	
	 if(index == 0)
	 {
		 t->next=first;
		 first=t;
	 }
	 else
	 {
	 for(i=0;i<index-1;i++)
	 p=p->next;
	 t->next=p->next;
	 p->next=t;
	
	 }
}
void InsertLast(struct Node *p,int x)
{
	struct Node *t;
	
	t = (struct Node *)malloc(sizeof(struct Node));
	t->data = x;
	t->next = NULL;
	
	if(first==NULL)
	{
		first = last = t;
	}
	else
	{
		last->next = t;
		last = t;	
	}
	
}

void SortedInsert(struct Node *p,int x)
{
	struct Node *t,*q = NULL;
	
	t = (struct Node *)malloc(sizeof(struct Node));
	t->data = x;
	t->next = NULL;
	
	if(first == NULL)
	{
		first = t;
	}
	else
	{
		while((p != NULL) && (p->data < x))
		{
			q = p;
			p = p->next;
		}
		
		if(p == first)
		{
			t->next = first;
			first = t;
		}
		else
		{
			t->next = q->next;
			q->next =  t;
		}
		
	}
	
}


int main(int argc, char *argv[]) {
	

	
	 Insert(first,0,15);
	 Insert(first,0,8);
	 Insert(first,0,9);
	 Insert(first,1,10); 

	DisplayLinkedList(first);
	
	
	
	return 0;
}

