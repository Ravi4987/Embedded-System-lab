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
}

int main(int argc, char *argv[]) {
	int A[] = {10,7,8,9,45};
	
	createDoublyLL(A,5);
	display(first);
	
	
	return 0;
}
