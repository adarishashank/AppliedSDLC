/**
 * @file Airlines2.c
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

void main()
{
	void reserve(int x), cancel(), display(), savefile(),viewdetails();  
	int choice;
	begin = stream = NULL;  //initialize the struct pointers to NULL 
	int num = 1;
	do
	{
		
		printf("\n\n\t\t ********************************************************************");
		printf("\n\t\t                   AIRLINE RESERVATION SYSTEM             ");
		printf("\n\t\t   *******************************************************************");
		printf("\n\n\n\t\t Please enter your choice from below (1-4):");
		printf("\n\n\t\t 1. Reservation");
		printf("\n\n\t\t 2. Cancel");
		printf("\n\n\t\t 3. Display Records");
		printf("\n\n\t\t 4. Available Flights");
		printf("\n\n\t\t 5. Exit");
		printf("\n\n\t\t feel free to contact ");
		printf("\n\n\t\t Enter your choice :");

        choice=0;

		scanf("%d", &choice); fflush(stdin);
		system("cls"); //to clear the screen after entering choice from user
		switch (choice)
		{
		case 1:
			reserve(num);
			num++;
			break;
		case 2:
			cancel();
			break;
		case 3:
			display();
			break;
		case 4:
		{
			viewdetails();
			break;
		}
		case 5:
		
			 savefile();
			 break;
		
		default:
			printf("\n\n\t SORRY INVALID CHOICE!");
			printf("\n\n\t PLEASE CHOOSE FROM 1-5");
			printf("\n\n\t Do not forget to chose from 1-5");
		}
		
	} while (choice != 5);
}

void viewdetails()
{
	system("cls");
	printf("-----------------------------------------------------------------------------");
	printf("\nFlight No\tName\tDestinations\t\tCharges\t\tTime\n");
	printf("-----------------------------------------------------------------------------");
	printf("\n1001\tRed Lines \tBoston to Manhattan\tRs.5000\t\t9am");
	printf("\n1002\tRed Lines \tManhattan To Boston\tRs.5000\t\t12pm");
	printf("\n1003\tLA City \tBoston To L.A\t\tRs.4500\t\t8am");
	printf("\n1004\tLA City \tL.A To Boston\t\tRs.4500\t\t11am");
	printf("\n1005\tIron City \tBoston To Chicago\tRs.4000\t\t7am");
	printf("\n1006\tIron City \tChicago To Boston\tRs.4000\t\t9.30am");
    printf("\n1007\tKeystone \tBoston To Washington\tRs.3500\t\t1pm");
    printf("\n1008\tKeystone \tWashington To Boston\tRs.3500\t\t4pm");
    printf("\n1009\tMeteor \t\tBoston To Miami\t\tRs.6000\t\t3.35pm");

}