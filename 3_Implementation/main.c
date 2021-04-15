#include "flames_calculator.h"
int main()
{
	char y[20];
	char p[20];
	printf("***********************FLAMES*********************");
	printf("Enter Your name:");
	scanf("%s",y);
	printf("Enter Your Partner name:");
	scanf("%s",p);
	printf("Fetching results.............");
	printf("You and Your partner are....");
	flames_calculator(y,p);
	
	
}
