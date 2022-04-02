/**
 * @file main.c
 * @author Herena Joshika A S
 * @brief A basic car rental system
 * @version 0.1
 * @date 2022-03-27
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include<stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include "carrent.h"

//Functions
int options(void);
int Rentcar(int balance);
int menuExit(void);
int errorMessage(void);
int Carwash(int balance);

int main() 
{
    //Local Declarations
    int option;
    int balance = 15000;
    int choose;

    bool again = true;

    while (again) {
    options();
    printf("Your Selection:\t");
    scanf("%d", &option);
        switch (option) {
            case 1:
            	system("CLS");
                balance = Rentcar(balance);
                break;
            case 2:
            	system("CLS");
                balance = Carwash(balance);
                break;
            case 3:
            	system("CLS");
                menuExit();
                return 0;
            default:
                errorMessage();
                break;
        }
        printf("Would you like to do another booking or book a Car Wash:\n");
        printf("&lt; 1 > Yes\n");
        printf("&lt; 2 > No\n");
        scanf("%d", &choose);

        system("CLS");
        if (choose == 2) {
            again = false;
            menuExit();
        }

}
    return 0;
}