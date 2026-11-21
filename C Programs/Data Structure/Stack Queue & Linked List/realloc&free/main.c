/***********************************************realloc&free************************************************************************/
#include <stdio.h>
#include <stdlib.h>



int main() {
	
	int *ptr;
	
	ptr=(int *)malloc(sizeof(int));
	
	*ptr = 2;
	
	printf("\nAddress and data of pointer after malloc:%u and %d",ptr,*ptr);
	
	ptr = realloc(ptr,sizeof(int));
	
	*ptr = 3;
	
	printf("\nAddress and data of pointer after realloc:%u and %d",ptr,*ptr);
	
	free(ptr);
	
	printf("\nAddress and data of pointer after free:%u and %d",ptr,*ptr);
	
	
	
	return 0;
}
