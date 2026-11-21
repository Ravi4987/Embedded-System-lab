/***********************************************Merging of Two Arrays****************************************************************/
#include <stdio.h>
#include <stdlib.h>



int main() {
	
	int a[50],b[50],c[50],m,n,p=0,q=0,r,i;
	
	printf("Enter the Size of First Array:");
	scanf("%d",&m);
	
	printf("Enter the elements of First Array\n");
	for(i=0;i<m;i++)
	{
		printf("\na[%d]:",i);
		scanf("%d",&a[i]);
		
	}
	
	
	printf("Enter the Size of Second Array:");
	scanf("%d",&n);
	
	printf("Enter the elements of First Array\n");
	for(i=0;i<n;i++)
	{
		printf("\nb[%d]:",i);
		scanf("%d",&b[i]);
		
	}
	
	
	while(p<m && q<n)
	{
		
		if(a[p]<b[q])
		{
			c[r]=a[p];
			p++;
			r++;
			
		}
		
		else
		{
			c[r]=b[q];
			
			q++;
			r++;
			
			
		}
		
	//	printf("\n\nValue of Result Array\n\n");			// For Debugging Purpose
	//	printf("\nc[%d]:%d",r-1,c[r-1]);
		
	}
	
	
	
//	printf("\n\nValue of P is %d and Q is %d\n\n",p,q);    	// For Debugging Purpose
	
	
	
	
	
if(p>=m)
{
	while(q<n)
	{
		
		c[r]=b[q];
		q++;
		r++;
		
//		printf("\n\nValue of result Array\n\n");			// For Debugging Purpose
//		printf("\nc[%d]:%d",r-1,c[r-1]);
		
		
		
	}
	
	
	
}

else
{
	
	
	
	while(p<m)
	{
		c[r]=a[p];
		p++;
		r++;
		
		
	}
}


printf("\n\nMerged Array is\n");
for(i=0;i<m+n;i++)
{
	printf("\nc[%d]:%d",i,c[i]);
	
	
}
	
	
	
	
	
	
	
	return 0;
}
