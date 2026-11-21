  #include <LPC214X.H>
#include"uart0.h"

int main()
{
init_uart0(9600);
string_uart0("SERIAL COMMUNICATION TEST WITH ARM\n\r");
	while(1)
	{
	 trans_uart0(rec_uart0());
	} 
}
