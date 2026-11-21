#include <iostream>
#include <string.h>

char data[] ="Welcome";
char data1[] = "Wel9come";


void ValidateString(char *data)
{
	for(unsigned int i=0;i<strlen(data);i++)
	{
		
		if(!((data[i]>=65 && data[i]<=90) ||(data[i]>=97 && data[i]<=122)) )
		{
			printf("Not Valid String\r\n");
			return;
		}
	}
	printf("Valid String\r\n");
}

int main(int argc, char** argv) {
	
    ValidateString(data);
    ValidateString(data1);
	return 0;
}
