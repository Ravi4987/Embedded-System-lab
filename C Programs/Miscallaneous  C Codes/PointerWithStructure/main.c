/************************************************************PointerWithStructure******************************************************************************/
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
	
	EP_BUF_DSCR *ptr;
ptr	=(EP_BUF_DSCR *)0x40006000;
	
	printf("Address stored by struct pointer:%u\n",ptr);
	printf("Address stored by struct pointer+1:%u\n",ptr+1);
	
	
	
	
	return 0;
}
