#include<stdio.h>
#include "flames_calculator.h"
int strlength(char* y, char* p);
int main()
{
	char y[20];
	char p[20];
	int u;
	printf("***********************FLAMES*********************\n");
	printf("Enter Your name:");
	scanf("%s",y);
	printf("Enter Your Partner name:");
	scanf("%s",p);
	printf("Fetching results.............\n");
	printf("You and Your partner are....");
	strlength(y,p);
	printf("\n\nTo continue Enter 1 else any number:: ");
	scanf("%d",&u);
	if(u==1)
		main();
	else 
		printf("\n\nThank You\n\n");

}
