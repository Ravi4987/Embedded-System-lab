/**************************************Circular Queue As Array*************************************************************/
#include <stdio.h>
#include <stdlib.h>

#define Max 4
int queue[Max],f=-1,r=-1;

int main() {
	int opt,x,count;
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
	printf("5 for View Array\n");
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
			
		case 5:
			printf("\n\n");
			printf("Array elements are\n");
			for(count=0;count<Max;count++)
			{
				
				printf("\nqueue[%d]:%d",count,queue[count]);
				
				
			}
			printf("\n\n");
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
	if((r==(Max-1)&&f==0) ||(f==r+1))
	{
		printf("\nOverflow\n");
		return ;
		
	}
	
	
	if(f==-1)
	{
		f=r=0;
	}
	
	else{
		
			if(r==(Max-1))  r=0;
			else r++;
		
	  }
	queue[r]=val;
	
	printf("\nElement inserted succesfully\n");
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
	else {
				if(f==Max-1) f=0;
				else f=f+1;
		}  
	
	
	
	printf("\nElement %d deleted succesfully\n",val);
	return;
	
	
	
	
}


void display()
{
	int count,pos=0;
	if(f==-1 && r==-1)   printf("\nNothing to display\n");
	else{
		
		if(f<=r)
		{
			
			for(count=f;count<=r;count++,pos++)
			printf("\nElement at %d : %d\n",pos,queue[count]);
		}
		
		else
		{
			for(count=f;count<Max;count++,pos++)
			printf("\nElement at %d : %d\n",pos,queue[count]);
			
			for(count=0;count<=r;count++,pos++)
			printf("\nElement at %d : %d\n",pos,queue[count]);
			
		}
		
		
		
		
	}
	
	
	
	
	
}

