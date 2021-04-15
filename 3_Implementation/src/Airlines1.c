/**
 * @file Airlines1.c
 * @author Adari Durga Sai Shashank
 * @brief 
 * @version 0.1
 * @date 2021-04-15
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include<stdio.h>
#include"../inc/Airlines.h"
struct airline_test
{
	char passport[10];
	char name[15];
    char destination[15];
	int seat_num;
	char email[25];
	
}
 *stream;




void details()
{
	printf("\n\t Enter your 6 digit passport number:");
	fgets(stream->passport,10,stdin);    //reads a line from stdin and stores it into the string pointed
	printf("\n\t Enter your  name:");
	fgets(stream->name,15,stdin); 
	printf("\n\t Enter your email address:");
	fgets(stream->email,25,stdin); 
    printf("\n\t Enter the Destination : ");
    fgets(stream->destination,15,stdin);
}
