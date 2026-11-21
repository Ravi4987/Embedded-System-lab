#include <stdio.h>
#include <stdlib.h>

struct Node {
	int data;
	struct Node *next;
}*first = NULL;

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


int main(int argc, char *argv[]) {
	
	
	Insert(first,0,1);  // Front
	DisplayLinkedList(first);
	
	Insert(first,1,8);  // between front and last
	DisplayLinkedList(first);
	
	Insert(first,2,16);  //last
	DisplayLinkedList(first);
	
	
	return 0;
}

