#include<stdio.h>
#include<conio.h>
int main()
{
char health,sex,area;
int age;

//printf("Enter health condn(e/p),sex(m/f),area(c/v)&age\n");
 //scanf("%c %c %c %d",&health,&sex,&area,&age);
 
 printf("Enter health &age,condn(e/p),sex(m/f),area(c/v)\n");
 scanf("%d %c %c %c",&age,&health,&sex,&area);

if(health=='e'&&sex=='m'&&area=='c'&&age>=25&&age<=35)
{
printf("\nInsured\n");
printf("\nPremium rate = Rs. 4 per 1,000\n");
printf("\nmaximum policy amount = Rs. 2,00,000");
}
else
if(health=='e'&&sex=='f'&&area=='c'&&age>=25&&age<=35)
{
printf("\nInsured");
printf("\nPremium Rate = Rs. 3 per 1000");
printf("\nMaximum policy amount = Rs. 1,00,000");
}
else
if(health=='p'&&sex=='m'&&area=='v'&&age>=25&&age<=35)
{
printf("\nInsured");
printf("\nPremium Rate = Rs. 6 per 1,000");
printf("\nMaximum policy amount = Rs. 10,000");
}
else
printf("\nYou cannot be insured\n");

printf ("\n\nPress any key to close.");

getch ();
return 0;
}
