#include<stdio.h>
#include<string.h>
#include"unity.h"
#include"unity_internals.h"
#include"flames_calculator.h"

int strlength(char* y, char* p)
{
	int a,b;
	a=strlen(y);
	b=strlen(p);
	flame_calculator(a,b,y,p);	
}
