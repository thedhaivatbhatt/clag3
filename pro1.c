// num1=1000,num2=500
// num1=500,num2=1000
#include <stdio.h>
void main()
{
    int num1 = 1000, num2 = 500, tamp;

    tamp = num1;
    num1 = num2;
    num2 = tamp;

    printf("\n num1: %d", num1);
    printf("\n num2 : %d", num2);
}