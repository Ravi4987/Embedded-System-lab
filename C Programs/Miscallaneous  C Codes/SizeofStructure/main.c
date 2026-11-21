/************************************************Size of Structure****************************************************************************/
#include <stdio.h>
#include <stdlib.h>

typedef unsigned long  DWORD; 

typedef struct _EP_BUF_DSCR {
  DWORD ADDR_TX;
  DWORD COUNT_TX;
  DWORD ADDR_RX;
  DWORD COUNT_RX;
} EP_BUF_DSCR;

int main(int argc, char *argv[]) {
	
	printf("Size of char:%d\n",sizeof(char));
	printf("Size of int:%d\n",sizeof(int));
	printf("Size of float:%d\n",sizeof(float));
	printf("Size of unsigned long:%d\n",sizeof(unsigned long int));
	printf("Size of structure:%d\n",sizeof(EP_BUF_DSCR));
	
	
	
	return 0;
}
