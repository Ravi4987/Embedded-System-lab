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

int main(int argc, char *argv[]) {
	int A[] = {10,20,1,4,5};
	
	createCirLL(A,5);
	
	DisplayCirLL(Head);
	
	printf("Using Recursion:");
	RDisplayCirLL(Head);
	return 0;
}
