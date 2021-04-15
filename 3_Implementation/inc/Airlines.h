/**
 * @file Airlines.h
 * @author Isha Prabhu 
 * @brief 
 * @version 0.1
 * @date 2021-04-12
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef __AIRLINES_H__
#define __AIRLINES_H__

#include <stdio.h>
#include <stdlib.h>

     

/**
 * Takes input from user
 * 
 * @return void
 */
void details();


/**
 * For reservation of seat
 * @param[in] x is argument 
 * @return void
 */
void reserve(int x);



/**
 * Save details to the file
 * 
 * @return void
 */

void savefile();



/**
 * To display seats reserved
 * 
 * @return void
 */
void display();




/**
 * To cancel reservation
 * 
 * @return void
 */
void cancel();
#endif /* #ifndef __AIRLINES_H__*/