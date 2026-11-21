#include <stdio.h>
#include <stdlib.h>

struct Node 
{
	struct Node *prev;
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
	Head->prev = Head->next;
	last = Head;
	
	for(i=1;i<n;i++)
	{
		t = (struct Node *)malloc(sizeof(struct Node));
		t->data =  A[i];
		t->prev = last;
		t->next = Head; // last is pointing to head
		Head->prev = t;
		last->next = t;  // last element will point to new element
		last = t; // new element become last
	}	
}

void DisplayCirLL(struct Node *p)
{
	do
	{
//		printf("Prev:%d Curr:%d Next:%d\r\n",p->prev->data,p->data,p->next->data);
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

int length(struct Node *p)
{
	int len = 0;
	do
	{
		p = p->next;
		len++;
	}while((p != NULL) && (p != Head));
	
	return len;
}

void insertDoublyLL(struct Node *p,int index,int x)
{
	struct Node *t;
	int i = 0;
	
	if((index<0) || (index>length(p)))
	{
	   return;	
	}
	
	if(index == 0)
	{
		t = (struct Node *)malloc(sizeof(struct Node));
		t->data = x;
		Head->prev->next = t;  // last element next pointer
		//printf("\r\nHead->prev->next %d\r\n",	Head->data);
		t->next = Head; // new element next pointer
		t->prev = Head->prev;  // new element prev pointer
		Head->prev = t;
		Head = t;
	}
	else
	{
		for(i=0;i<index-1;i++)
		{
			p = p->next;
		}
		
		t = (struct Node *)malloc(sizeof(struct Node));
		t->data = x;
		
		t->next = p->next;  // new element next pointer
		t->prev = p;		// new element prev pointer
		
		p->next->prev = t; // next element after new element prev pointer should point to new element
		p->next = t;	  // the element before new element next pointer should point to new element
	}
	
}

int main(int argc, char *argv[]) {
	int A[] = {10,20,1,4,5};
	
	createCirLL(A,5);
	
	DisplayCirLL(Head);
	
//	insertDoublyLL(Head,0,9);
    insertDoublyLL(Head,5,9);
	DisplayCirLL(Head);
	
	
	return 0;
}
