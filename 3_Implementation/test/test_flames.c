
#include <stdio.h>
#include <string.h>
#include "flames_calculator.h"
#include "unity/unity.h"
#include "unity/unity_internals.h"
/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}
void test_div(void)
{
  char y[20] = "Maneesh";
  char p[20] = "Chaitanya";	
  TEST_ASSERT_EQUAL(1, strlenght(y,p));
  TEST_ASSERT_EQUAL(0, 	strlenght(NULL,NULL));
  char y[20]="nani";
  char p[20]="vani";
  TEST_ASSERT_EQUAL(1, flame_calculator(4,4,y,p));
  //TEST_ASSERT_EQUAL(0, div(10, 0));
}

int main()
{
	/*char y[20] = "Maneesh";
	char p[20] = "Chaitanya";
	printf("Enter your name:: ");
	scanf("%s",y);
	printf("Enter your Partner name:: ");
	scanf("%s",p);
	flame_calculator(y,p);*/
	UNITY_BEGIN();
	
	RUN_TEST(test_div);
 
  /* Close the Unity Test Framework */
  	return UNITY_END(); 
}
