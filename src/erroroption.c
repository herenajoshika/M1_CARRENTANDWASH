/**
 * @file erroroption.c
 * @author Herena Joshika A S
 * @brief Shows error if you've given wrong card number
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

 

   int errorMessage() 
{
    printf("You've selected invalid number!!\n");
    return 9;
}