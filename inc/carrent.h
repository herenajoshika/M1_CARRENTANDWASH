/**
 * @file carrent.h
 * @author Herena Joshika A S
 * @brief Header file for Car Rental and wash Program
 * @version 0.1
 * @date 2022-03-27
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#ifndef __ATM_H__
#define __ATM_H__

/**
 * @brief The  function option is defined which shows three options to be chosen
 * 
 * @return 6
 */

int options(void);

/**
 * @brief The rental procedures are shown
 * 
 * @param balance 
 * @return balance value after working 
 */
int Rentcar(int balance);
/**
 * @brief It exits the program when called
 * 
 * @return 5
 */
int menuExit(void);

/**
 * @brief Shows error message when wrong data given
 * 
 * @return 9
 */
int errorMessage(void);

/**
 * @brief  The Car Wash procedures are shown
 * 
 * @param balance 
 * @return balance value after working 
 */
int Carwash(int balance);

#endif