/*****************************************************Program to calculate Percentage marks******************************************************/

#include <stdio.h>
#include <stdlib.h>



int main() {
	
	int English,Hindi,Math,Social,Science,AggregateMarks;
	float PercentageMarks;
	
	printf("Enter marks of English:");
	scanf("%d",&English);
	
	printf("Enter marks of Hindi:");
	scanf("%d",&Hindi);
	
	printf("Enter marks of Math:");
	scanf("%d",&Math);
	
	printf("Enter marks of Social:");
	scanf("%d",&Social);
	
	
	printf("Enter marks of Science:");
	scanf("%d",&Science);
	
	AggregateMarks=English+Hindi+Math+Social+Science;
	
	PercentageMarks=((float)AggregateMarks/500)*100;
	
	printf("Aggregate Marks is %d\n",AggregateMarks);
	printf("Percentage of Marks is %f\n",PercentageMarks);
	
	
	
	
	return 0;
}
