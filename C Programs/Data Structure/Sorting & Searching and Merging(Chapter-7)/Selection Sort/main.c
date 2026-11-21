/************************************************Selection Sort*****************************************************************************/
#include <stdio.h>
#include <stdlib.h>

#define Ascen  0

int main() {
	
	int a[5],i,j,k,temp,min,max,position;
	
	
	printf("Enter the element of Array");
	for(i=0;i<5;i++)
	{
		
		printf("\na[%d]:",i);
		scanf("%d",&a[i]);
		
	}
	
#if Ascen

   for(i=0;i<5;i++)
   {
   	  min=a[i];
   	  position=i;
   	  
   	  for(j=i+1;j<5;j++)
   	  {
   	  			if(min>a[j])
					 {
						min=a[j];
						position=j;	
					 	
					 }
					 
					 
	  }
	  
	  if(position!=i)
		{
					    temp=a[i];
						a[i]=a[position];
						a[position]=temp; 	
					 	
		}
		
/*		printf("\n\nPass%d",i);     // For Debugging Purpose
		for(k=0;k<5;k++)
		printf("\na[%d]:%d",k,a[k]);
   	  	   	  	 	
   		*/
}

#else
for(i=0;i<5;i++)
   {
   	  max=a[i];
   	  position=i;
   	  
   	  for(j=i+1;j<5;j++)
   	  {
   	  			if(a[j]>max)
					 {
						max=a[j];
						position=j;	
					 	
					 }
					 
					 
	  }
	  
	  if(position!=i)
		{
					    temp=a[i];
						a[i]=a[position];
						a[position]=temp; 	
					 	
		}
		
/*		printf("\n\nPass%d",i);              // For Debugging Purpose
		for(k=0;k<5;k++)
		printf("\na[%d]:%d",k,a[k]);
   	  	   	  	 	
   		*/
}

#endif


printf("\n\nSorted Array is\n");			

for(i=0;i<5;i++)
{
	printf("\na[%d]:%d",i,a[i]);
	
}
	
	
	
	return 0;
}
