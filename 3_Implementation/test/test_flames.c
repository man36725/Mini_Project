#include <stdio.h>
#include <string.h>
#include "unity.h"
#include "unity_internals.h"
#include "flames_calculator.h"

void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

void test_sum(void){
	char y[20] = "Maneesh";
	char p[20] = "lanka";
	TEST_ASSERT_EQUAL(1,flame_calculator(y,p));
    TEST_ASSERT_EQUAL(0,flame_calculator(0,0));
}



int main()
{
	/*char y[20] = "Maneesh";
	char p[20] = "Chaitanya";
	printf("Enter your name:: ");
	scanf("%s",y);
	printf("Enter your Partner name:: ");
	scanf("%s",p);*/
	//flame_calculator(y,p);
	UNITY_BEGIN();

/* Run Test functions */
  
  RUN_TEST(test_sum);


  /* Close the Unity Test Framework */
  return UNITY_END();

}
