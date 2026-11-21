/****************************************************Program to select students for admission in B.SC*******************************************************************/
#include <stdio.h>
#include <stdlib.h>



int main() {
	
	int math,chem,phy,total;
	
	printf("Enter the marks of math,physics and chemistry\n");
	scanf("%d %d %d",&math,&chem,&phy);
	
	total=math+chem+phy;
	
	if(math>=50 && chem>=45 && phy>=40 && total>=180) printf("Student is eligilble");
	else printf("Student is not eligilble");
	
	return 0;
}
