/**
 * @file rentcar.c
 * @author Herena Joshika A S
 * @brief Rental Procedures are done
 * @version 0.1
 * @date 2022-03-27
 * 
 * @copyright Copyright (c) 2022
 * 
 */


#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include "carrent.h"

int Rentcar(int balance)
{
    int num;
    printf("There are many available cars please choose one from below \n\n");
    printf("Innova (press :1) : Rs.2000 per day \n\n");
    printf("Volkswagen (press :2) : Rs.3000 per day \n\n");
    printf("Wagen R (press :3) : Rs.1500 per day \n\n");
    printf("Swift Desire (press :4) : Rs.2500 per day \n\n");
    printf("Swift (press :5) : Rs.1500 per day \n\n");
    printf("Enter the number : ");
    scanf("%d",&num);
    int pin;
    int pay;
    
    while (1)
	{
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

    if(num==1)
    {
        pay=2000;
    }
    else if(num==2)
    {
        pay=3000;
    }
    else if(num==3)
    {
        pay=1500;
    }
    else if(num==4)
    {
        pay=2500;
    }
    else if(num==5)
    {
        pay=1500;
    }
    else
    {
        errorMessage();
    } 

   if(balance<pay)
    {
        printf("SORRY INSUFFICIENT BALANCE\n");
        printf("Your Balance is: %d\n\n", balance);
    }
    else
    {
    printf("Your Balance is: %d\n", balance);
    printf("The amount to be paid is : %d \n\n",pay);
    balance = balance-pay;
    int* result = &balance;
    *result = balance;
    printf("************RECIEPT*************\n\n");
    if(num == 1)
    {
        printf("The car that you have booked is : Innova\n");
        printf("The balance that contains in your card is %d \n\n",*result);
    }
    if(num == 2)
    {
        printf("The car that you have booked is : Volkswagen\n");
        printf("The balance that contains in your card is %d \n\n",*result);
    }
    if(num == 3)
    {
        printf("The car that you have booked is :  Wagen R\n");
        printf("The balance that contains in your card is %d \n\n",*result);
    }
    if(num == 4)
    {
        printf("The car that you have booked is : Swift Desire\n");
        printf("The balance that contains in your card is %d \n\n",*result);
    }
    if(num == 5)
    {
        printf("The car that you have booked is : Swift\n");
        printf("The balance that contains in your card is %d \n\n",*result);
    }
    printf("***********************************\n\n");
    }

    return balance;
}