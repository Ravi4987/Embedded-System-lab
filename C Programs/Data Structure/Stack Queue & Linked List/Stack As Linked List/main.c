/*****************************************************************************************************************/

#include <stdio.h>
#include <stdlib.h>

typedef struct link
{
	int data;
	struct link *next;	
	
}Stack;

Stack *top=NULL; 

int push(int data);
int pop();
void Display();


int main() {
	int choice,data;
	
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
				printf("Enter the Element to be added:");
				scanf("%d",&data);
				push(data);
			    break;
			    
			case 2:
				pop();			
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
    Stack *s;
    s=(Stack *)malloc(sizeof(Stack));
    if(s==NULL) printf("\nMemory not allocated\n");
    else{
	
    s->data=data;
    s->next=top;
    top=s;
    printf("\nElement added Succesfully\n");
   } 
	
}

int pop()
{
	Stack *s;
     if(top==NULL) printf("\nStack is empty\n");
     else{
     	
     	s=top;
     	top=s->next;
     	printf("\nElement deleted Succesfully\n");
	 }
	
	
}


void Display()
{  Stack *s;
   if(top==NULL) printf("\nNothing to Display\n");
   else{
   	      s=top;
   	    printf("\nDisplaying Element\n");  
   	    
   	    
   	 /*   do{
   		printf("\nElement is %d\n",s->data);
   		s=s->next;
  		
	   		}while(s->next!=NULL);  */
	   		
	while(1)
	{
		
		printf("\nElement is %d\n",s->data);
		if(s->next==NULL)  break;
		else    s=s->next;
		
	}
   	
   	
   	
   	
   }
	
	
	
}

