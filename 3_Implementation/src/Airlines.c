/**
 * @file Airlines.c
 * @author Adari Durga Sai Shashank
 * @brief 
 * @version 0.1
 * @date 2021-04-15
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
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
struct airline_test *dummy;



void details();

void reserve(int x)
{
	stream = begin;
	if (begin == NULL)
	{
		// first user
		begin = stream = (struct airline_test*)malloc(sizeof(struct airline_test));
		details();
		stream->following = NULL;
		printf("\n\t Seat booking successful!");
		printf("\n\t your seat number is: Seat A-%d", x);
		stream->seat_num = x;
		return;
		free(begin);
		free(stream);
	}
	else if (x > 100) // FULL SEATS
	{
		printf("\n\t\t Seat Full.");
		return;
	}
	else
	{
		// next user
		while (stream->following)
			stream = stream->following;
		stream->following = (struct airline_test *)malloc(sizeof(struct airline_test));
		stream = stream->following;
		details();
		stream->following = NULL;
		printf("\n\t Seat booking succesful!");
		printf("\n\t your seat number is: Seat A-%d", x);
		stream->seat_num = x;
		return;
		
		
	}
} 



void savefile()
{
	FILE *fpointer = fopen("IndiGo records", "w");
	if (!fpointer)
	{
		printf("\n Error in opening file!");
		return;
		
	}
	stream = begin;
	while (stream)
	{
		fprintf(fpointer, "%-10s", stream->passport);

		fprintf(fpointer, "%-15s", stream->name);

		fprintf(fpointer, "%-25s", stream->email);

        fprintf(fpointer, "%-15s", stream->destination);

        fprintf(fpointer, "\n");
		stream = stream->following;
	}
	printf("\n\n\t Details have been saved to a file (IndiGo records)");
	fclose(fpointer);
}


void cancel()
{
	stream = begin;
	system("cls");
	char passport[10];
	printf("\n\n Enter passort number to delete record?:");
	fgets(passport,6,stdin);
	if (strcmp(begin->passport, passport) == 0)
	{
		dummy = begin;
		begin = begin->following;
		free(dummy);
		printf(" booking has been deleted");
		return;

	}

	while (stream->following)
	{
		if (strcmp(stream->following->passport, passport) == 0)
		{
			dummy = stream->following;
			stream->following = stream->following->following;
			free(dummy);
			printf("has been deleted ");
			return;
		}
		stream = stream->following;
	}
	printf("passport number is wrong please check your passport");
	

}
