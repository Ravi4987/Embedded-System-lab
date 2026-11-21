#include <stdio.h>
#include <string.h>



char data[20] = __DATE__; // 2023-05-13


void update_build_date(void)
{
				if(!memcmp("Jan",&__DATE__[0],3))
				{
					data[5]= '0';
					data[6] = '1';
				}
				else if(!memcmp("Feb",&__DATE__[0],3))
				{
					data[5]= '0';
					data[6] = '2';
				}
				else if(!memcmp("Mar",&__DATE__[0],3))
				{
					data[5]= '0';
					data[6] = '3';
				}
				else if(!memcmp("Apr",&__DATE__[0],3))
				{
					data[5]= '0';
					data[6] = '4';
				}
				else if(!memcmp("May",&__DATE__[0],3))
				{
					data[5]= '0';
					data[6] = '5';
				}
				else if(!memcmp("Jun",&__DATE__[0],3))
				{
					data[5]= '0';
					data[6] = '6';
				}
				else if(!memcmp("Jul",&__DATE__[0],3))
				{
					data[5]= '0';
					data[6] = '7';
				}
					else if(!memcmp("Aug",&__DATE__[0],3))
				{
					data[5]= '0';
					data[6] = '8';
				}
				else if(!memcmp("Sep",&__DATE__[0],3))
				{
					data[5]= '0';
					data[6] = '9';
				}
				else if(!memcmp("Oct",&__DATE__[0],3))
				{
					data[5]= '1';
					data[6] = '0';
				}
				else if(!memcmp("Nov",&__DATE__[0],3))
				{
					data[5]= '1';
					data[6] = '1';
				}
				else if(!memcmp("Dec",&__DATE__[0],3))
				{
					data[5]= '1';
					data[6] = '2';
				}
				
				
			   
				  if(__DATE__[4]==' ')
				  {
				  	data[8] = '0';
			    	data[9] = __DATE__[5];
				  }
				  else
				  {
				  	data[8] = __DATE__[4];
			    	data[9] = __DATE__[5];
				  }
					
				
				memcpy(&data[0],&__DATE__[7],4);
				
	
	data[4]= data[7] = '-';
	data[10]='\0';
}



int main()
{
	int i=0;
  update_build_date();
  printf("Build date:%s\r\n",data);
  
}


