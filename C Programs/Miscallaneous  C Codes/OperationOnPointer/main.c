/***************************************************Different Operation on pointers*****************************************************************/
#include <stdio.h>
#include <stdlib.h>



int main() {
	
	int var=10,*p,*q;
	
	p=&var;
	
/***************************1.Assignment Operation**************************************************/

			printf("Value of Pointer P before Assignment:%d\n",p);
			printf("Value of Pointer Q before Assignment:%d\n",q);
				q=p;
				
			printf("Value of Pointer P after Assignment:%d\n",p);
			printf("Value of Pointer Q after Assignment:%d\n",q);	
				


/*****************************************************************************/


/*******************************2.Comparison of Pointer**********************************************/

				if(p==q)   printf("Pointers are equal\n");
				
				else       printf("Pointers are not equal\n");


/*****************************************************************************/


/*******************************3.Addition of number to pointer**********************************************/

						p=p+3;
						
						printf("Value of P after adding 3 is %d\n",p);			/// Note new value will depend upon the type of pointer
																				// Here pointer is integer type so size is 4 bytes
																				// so if addresss is 2 after addind 3 it will be 14(i.e 3X4)



/*****************************************************************************/


/*******************************4.Subtration of number to pointer**********************************************/

					    p=p-3;
						
						printf("Value of P after substracting 3 is %d\n",p);



/*****************************************************************************/



/*******************************5.Subtration of one pointer from other**********************************************/

							printf("Result after substraction Poiner P from Pointer Q is %d\n",p-q);


/*****************************************************************************/


/*******************************6.Shorthand operation on pointers**********************************************/

								p++;
								
								q--;
								
								printf("Value of Pointer P after incremention:%d\n",p);
								printf("Value of Pointer Q after decrementing:%d\n",q);

								

/*****************************************************************************/














/*******************************Note**********************************************

		Dont attemt the following operation on pointers, they would never work out
		
		1. Addition of two pointers
		2. Division of pointer with a constant 
		3. Multiplication of a pointer with a constant


*****************************************************************************/



	
	
	
	
	
	return 0;
}
