/**************************************Queue As Array*************************************************************/
#include <stdio.h>
#include <stdlib.h>

#define Max 20
int queue[Max],f=-1,r=-1;

int main() {
	int opt,x;
	void insert(int val);
	void delete();
	void display();
	
while(1)
{
	printf("\nEnter option\n");
	printf("1 for insertion\n");
	printf("2 for deletion\n");
	printf("3 for display\n");
	printf("4 for exit\n");
	printf("opt:");
	scanf("%d",&opt);
	
	
	switch(opt)
	{
		case 1:
			printf("Enter the element to inserted:");
			scanf("%d",&x);
			insert(x);
			break;
			
		case 2:
			delete();
			break;
			
		case 3:
			display();
			break;
			
		case 4:
			exit(0);
			break;
			
			
		default:
			printf("\nWrong option entered\n");
			break;
				
	}
	
	
	
	
	
	
	
}
		
	
	
	return 0;
}


void insert(int val)
{
	if(r==(Max-1))
	{
		printf("\nOverflow\n");
		return ;
		
	}
	
	else{
		
		r++;
		queue[r]=val;
		
		if(f==-1) f=0;
		printf("\nElement inserted succesfully\n");
	}
	
	
	
}

void delete()
{
	int val;
	if(f==-1)
	{
			printf("\nunderflow error\n");
			printf("\nThere is noting to delete\n");	
			return;
		
	}
	
	val=queue[f];
	if(f==r)  f=r=-1;
	else   f=f+1;
	
	if(f>=Max)
	{
		
		f=-1;
		r=-1;
				
	}
	
	printf("\nElement %d deleted succesfully\n",val);
	return;
	
	
	
	
}


void display()
{
	int count;
	if(f==-1 && r==-1)   printf("\nNothing to display\n");
	else{
		
		for(count=f;count<=r;count++)
		printf("\nElement at %d : %d\n",count,queue[count]);
		
		
		
	}
	
	
	
	
	
}
