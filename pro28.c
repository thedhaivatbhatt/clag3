// write a program to find out power and exponent
#include <stdio.h>
void main()
{
    int base, power, exponent, count;
    printf("enter the base:");
    scanf("%d", &base);
    printf("enter the value of power:");
    scanf("%d", &power);
    if (power > 1) // power=user>1
    {

        exponent = base * base;
        count = 2; // 2

        // printf("%d",exponent);
        while (count < power) // count=2,power=user
        {
            exponent = exponent * base;
            count++; // count=count+1;
        }
        printf("%d", exponent); // exponent= ans
    }
    else if (power == 1) // power=user ==1

        printf("%d", base);

    else
    {
        printf("invalid");
    }
}