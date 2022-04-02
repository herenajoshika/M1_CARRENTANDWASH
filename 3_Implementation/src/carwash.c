/**
 * @file carwash.c
 * @author HERENA JOSHIKA A S
 * @brief  Booking Car Wash
 * @version 0.1
 * @date 2022-04-01
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include "carrent.h"

int Carwash(int balance)
{
    while (1)
	{
        int pin ;
        int flag ;
		printf("ENTER YOUR CARD NUMBER: (enter:98765) \n");
		scanf("%d", &pin);
		if (pin == 98765)
            break;
        else
        {
          printf("PLEASE ENTER VALID CARD NUMBER\n");
          printf("Would you like to continue:\n");
          printf("&lt; 1 > Yes\n");
          printf("&lt; 2 > No\n");
          scanf("%d", &flag);
          if (flag == 2) {
            menuExit();
            exit(0);
        }
        }
	} 
    if(balance<1500)
    {
        printf("SORRY INSUFFICIENT BALANCE\n");
        printf("Your Balance is: %d\n\n", balance);
    }
    else
    {
    printf("Your Balance is: %d\n", balance);
    printf("The amount to be paid is : %d \n\n",1500);
    balance = balance-1500;
    int* result = &balance;
    *result = balance;
    printf("************RECIEPT*************\n\n");
    printf("YOUR CAR WASH IS CONFIRMED AND YOUR BALANCE IS %d \n\n",*result);
    printf("***********************************\n\n");
    }
    return balance;
}