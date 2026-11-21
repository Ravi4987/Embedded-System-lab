#include <stdio.h>
#include <stdlib.h>

unsigned char STRCMP(unsigned char *cmp,unsigned char *giv, unsigned char nob);

int main() {
	
	unsigned char result;
	
	result=STRCMP("OK","O", 2);
	
	if(result) printf("\nMatched\n");
	else printf("\nNot Matched\n");
	
	
	
	
	return 0;
}




unsigned char STRCMP(unsigned char *cmp,unsigned char *giv, unsigned char nob)
{
unsigned char ii,*start,match=0;
start=cmp;

		for(ii=0;ii<nob;)
		{
			
		printf("\nValue of Given pointer:%x",*giv);
		
				if(*cmp==*giv)
				{
					
					
				match++;
				cmp++;  giv++;
				ii++;
				}
		
		
				else
				{
				
					  if(*(giv+1)==0x00) {
					  	
					  	
					  return 0;
					  
						}
					
					  if(match){
					   match=0;
					 cmp=start;
					  }
			
					  giv++;
					  ii=0;
				
				}
				
				
		
		
		}


return 1;

}

