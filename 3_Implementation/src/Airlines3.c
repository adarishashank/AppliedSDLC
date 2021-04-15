/**
 * @file Airlines3.c
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
	struct airline_test *following;
}
*begin, *stream;



void display()
{
	stream = begin;
	while (stream)
	{
		printf("\n\n Passport Number : %-10s", stream->passport);
		printf("\n         name : %-15s", stream->name);
		printf("\n      email address: %-25s", stream->email);
		printf("\n      Seat number: A-%d", stream->seat_num);
        printf("\n     Destination:%-15s", stream->destination);
		printf("\n\n++*=====================================================*++");
		stream = stream->following;
	}

}
