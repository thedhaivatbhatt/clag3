// write a program to print 3 triagnle
#include <stdio.h>
void main()
{
    int count = 0, flash = 0;
    for (count = 0; count < 7; count++)
    {
        printf("*");
    }
    for (count = 4; count > 0; count--)
    {
        printf("\n");
        printf("*");
        for (flash=0; flash < count; flash++)
        {
            printf(" ");
        }
        printf("*");
    }
    printf("\n");
    for (count = 0; count < 1; count++)
    {
        printf("*");
        printf("\n");
    }
    // printf("*");
    // for(flash=0;flash<4;flash++)
    // {
    //     printf(" ");
    // }
    // printf("*");
    // printf("\n");
    // printf("*");
    // for(flash=0;flash<3;flash++)
    // {
    //     printf(" ");
    // }
    // printf("*");
    // printf("\n");
    // printf("*");
    // for(flash=0;flash<2;flash++)
    // {
    //     printf(" ");
    // }
    // printf("*");
    // printf("\n");
    // printf("*");
    // for(flash=0;flash<1;flash++)
    // {
    //     printf(" ");
    // }
    // printf("*");
    // printf("\n");
    // printf("*");
    // *   *
    // *  *
}