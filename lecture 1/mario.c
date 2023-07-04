//CS50 Lecture 2:
//Implementind Mario Brigs in terminal
//Author: Aaron Wajah
//Date:2nd June, 2023.

#include "cs50.h"
#include<stdio.h>


int main(void)
{
    //horizontal goodies floating in space in mario
    for(int i=1; i<=4; i++)
    {
        printf("| ? |\t");
    }
    printf("\n");
    printf("\n");

//vertical brigs in mario
    for(int j=1; j<=4; j++)
    {
        printf(" __\n");
        printf("|__| \n");
    }
}


