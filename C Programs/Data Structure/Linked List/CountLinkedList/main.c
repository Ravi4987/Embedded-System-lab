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

void countLinkedListNodes(struct Node *p)
{
	int i=0;
	while(p!=NULL)
	{
		i++;
		p = p->next;
	}
	
	printf("Total Nodes:%d\r\n",i);
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
	while(p!=NULL)
	{
		printf("%d ",p->data);
		p = p->next;
	}
	
}


int main(int argc, char *argv[]) {
	
	int A[] = {3,5,7,10,15};
	
	create(A,5);
	
	DisplayLinkedList(first);
	
	printf("\r\n");
	
	countLinkedListNodes(first);
	
	printf("\r\n");
	
	printf("Total Nodes Using Recursion:%d",countLinkedListNodesUsingRecursive(first));
	
	
	return 0;
}

