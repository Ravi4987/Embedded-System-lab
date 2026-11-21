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

void DisplayLinkedList(struct Node *p)
{
	while(p!=NULL)
	{
		printf("%d ",p->data);
		p = p->next;
	}	
}


void DisplayLinkedListUsingRecursion(struct Node *p)
{
	if(p!=NULL)
	{
		printf("%d ",p->data);
		DisplayLinkedListUsingRecursion(p->next);
	}	
}

int main(int argc, char *argv[]) {
	
	int A[] = {3,5,7,10,15};
	
	create(A,5);
	
	DisplayLinkedList(first);
	
	printf("\r\n");
	
	DisplayLinkedListUsingRecursion(first);
	
	
	return 0;
}
