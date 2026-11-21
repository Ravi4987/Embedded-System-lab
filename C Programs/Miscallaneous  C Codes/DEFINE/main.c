#include <stdio.h>

#define Square(x) ((x)*(x))

#define True 1
#define False 0

int main(void)

{

    int x = 4;

    int z;

    z = Square(x);

    if(z==16)
    printf("True value is %d",True);
    
    else
    printf("False value is %d",False);


    return 0;

}


