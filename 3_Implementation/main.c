#include <stdio.h>
#include "flames_calculator.h"
void flame_calculator(char* y, char* p);
int main()
{
	char y[20];
	char p[20];
	printf("***********************FLAMES*********************");
	printf("Enter Your name:");
	scanf("%s",y);
	printf("Enter Your Partner name:");
	scanf("%s",p);
	printf("Fetching results.............\n");
	printf("You and Your partner are....");
	flame_calculator(y,p);
	
	
}
