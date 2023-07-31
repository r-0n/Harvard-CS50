//CS50 Lecture 1_section 1:
//Illamas problem
//Author: Aaron Wajah
//Date:4nd June, 2023.

#include "cs50.h"
#include <C:\Users\AaronWajah\OneDrive - nyu.edu\Desktop\projects\Harvard-CS50\resources\cs50.c>
#include<stdio.h>


int main(void)
{

    int start_llamas;
    int end;
    int years;

    do
    {
        /* code */
        start_llamas = get_int("Number of starting Illamas");
    } while (start_llamas <0);
    

    do
    {
        end=  get_int("Enter number of target Illamas");
    } while (end<start_llamas);

    do
    {
        start_llamas += start_llamas/12;
        years++;
    } while (start_llamas<end);
    

    printf("Years taken %i \n", years);
    
}

