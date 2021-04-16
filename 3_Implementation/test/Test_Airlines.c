/**
 * @file Test_Airlines.c
 * @author Adari Durga Sai Shashank
 * @brief 
 * @version 0.1
 * @date 2021-04-15
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "../inc/Airlines.h"
#include "../unity/unity.h"
#include <string.h>
#include "../unity/unity_internals.h"



/* Required by the unity test framework */
void setUp()
{
}
/* Required by the unity test framework */
void tearDown()
{
}


	struct airline_test
{
	char passport[6];
	char name[15];
    char destination[15];
	int seat_num;
	char email[25];
	
}stream;

void test_details();
void test_display();



void test_details(void)
{
strcpy(stream.passport,"12345");
strcpy(stream.name,"Shashank");
strcpy(stream.email,"adari@gmail.com");
strcpy(stream.destination,"Vizag");


TEST_ASSERT_EQUAL_STRING("12345",stream.passport);
TEST_ASSERT_EQUAL_STRING("Shashank",stream.name);
TEST_ASSERT_EQUAL_STRING("adari@gmail.com",stream.email);
TEST_ASSERT_EQUAL_STRING("Vizag",stream.destination);



}

void test_display(void)
{
strcpy(stream.passport,"12345");
strcpy(stream.name,"Shashank");
strcpy(stream.email,"adari@gmail.com");
strcpy(stream.destination,"Vizag");


TEST_ASSERT_EQUAL_STRING("12345",stream.passport);
TEST_ASSERT_EQUAL_STRING("Shashank",stream.name);
TEST_ASSERT_EQUAL_STRING("adari@gmail.com",stream.email);
TEST_ASSERT_EQUAL_STRING("Vizag",stream.destination);



}





int main()
{
    /* Initiate the Unity Test Framework */
    UNITY_BEGIN();

    /* Run Test functions */
    RUN_TEST(test_details);
    RUN_TEST(test_display);
    
    

    /* Close the Unity Test Framework */
    return UNITY_END();
}




