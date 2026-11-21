/**************************************************Stack As Array with implemenation of Structrure**********************************************************************/

#include <stdio.h>
#include <stdlib.h>

#define MAX   10

typedef struct
{
	int Arr[MAX];
	int TOP;
	
}STACK;

STACK *s;

int push(int data);
int pop();
void Display();


int main() {
	
	int data, choice=0;
	
	s=(STACK *)malloc(sizeof(STACK));
	s->TOP=-1;
	
	printf("\nOption no for Stack operation\n");
	printf("\n1. for ADD element in Stack");
	printf("\n2. Remove element from Stack");
	printf("\n3. Display element of Stack");
	printf("\n4. To exit\n");
	
	while(1)
	{
		printf("\nEnter the choice\n");
		
	
		scanf("%d",&choice);
		
		
		
		switch(choice)
		{
			case 1:
				printf("Enter the number to be inserted:");
				scanf("%d",&data);
				if(push(data))  printf("\nData Added succesfully\n");
				else 			printf("\nStack is Full item cant be inserted\n");
			    break;
			    
			case 2:
				if(pop())  printf("\nData deleted Succesfully\n");
				else       printf("\nStack is empty\n");			
				break;
				
			case 3:
				Display();
				break;
				
			case 4:
				exit(0);
				break;
				
			default:
				printf("\nWrong Choice Entered");
				break;
			
			
		}
		
		
		
		
		
		
		
	}
	
	
	
	
	
	
	
	
	
	return 0;
}



int push(int data)
{
	if(s->TOP==MAX-1)
	return 0;
	
	else{
		
	
		s->Arr[++s->TOP]=data;
		return 1;
	}
	
}

int pop()
{
	if(s->TOP==-1) return 0;
	else {
		
		s->TOP--;
		return 1;
		
	}
	
	
}


void Display()
{
	int i;
	if(s->TOP==-1) printf("\n Nothing is to display Stack is empty\n");
	
	else
	{
		for(i=s->TOP;i>=0;i--)
		{
			printf("\nElement at %d is %d",i,s->Arr[i]);
			
		}
		
		
	}
	
	
	
	
}
