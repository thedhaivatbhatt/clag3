// write a program to find out how many days in month
// <,>,<=,>=,==,!=,&&,||
#include <stdio.h>
void main()
{
    int month;
    printf("enter the month");
    scanf("%d", &month);
    if (month <= 12 && month >= 1) // month 1 to 12 run
    {
        if (month==1 || month==3 || month ==5 || month ==7 || month==8 || month==10 || month ==12)
        {
            printf("31 days");
        }
        else if (month==2)
        {
            printf("28/29 days");
        }
        else
        {
            printf("30 days");
        }
    }

    printf("\n goodbye");
}