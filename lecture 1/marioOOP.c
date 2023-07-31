//CS50 Lecture 1:
//Implementind Mario Brigs in terminal
//Author: Aaron Wajah
//Date:2nd June, 2023.

#include "cs50.h"
#include <C:\Users\AaronWajah\OneDrive - nyu.edu\Desktop\projects\Harvard-CS50\resources\cs50.c>
#include<stdio.h>


int get_size(void);
void print_bricks(int size);
void print_array(int n);


int main(void)
{
    //horizontal goodies floating in space in mario
    int n =get_size();
    // int n = get_int("Size: ");


    // for(int i=1; i<=n; i++)
    // {
    //     printf("| ? |\t");
    // }
    // printf("\n");
    // printf("\n");

    // for(int j=1; j<=n; j++)
    //     {
    //         printf(" __\n");
    //         printf("|__| \n");
    //     }

    // for (int i=0; i<=n; i++)
    // {
    //     for (int j=0; j<=n; j++)
    //     {
    //         printf("#");
    //     }
    //     printf("\n");
    // }

    // for (int i=0; i<=n; i++)
    // {
    //     for (int j=0; j<=n; j++)
    //     {
    //         printf("#");
    //     }
    //     printf("\n");
    // }

    //vertical brigs in mario
    print_bricks(n);
    print_array(n);
}


int get_size(void)
{
    int n;
    do
    {
        n = get_int("Size of Horizontal and vertical bricks");
    }
    while(n<1);
    return n;
}


void print_bricks(int size)
{
    for(int i=1; i<=size; i++)
    {
        printf("| ? |\t");
    }
    printf("\n");
    printf("\n");

    for(int j=1; j<=size; j++)
        {
            printf(" __\n");
            printf("|__| \n");
        }

}


void print_array(int n)
{
    for (int i=1; i<=n; i++)
    {
        for (int j=1; j<=n; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}