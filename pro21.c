// add
//  sub
//  mul
//  div
//  module
//  min
//  max
//  eql
#include <stdio.h>
void main()
{
    int num1, num2, option;
    float ans;
    printf("enter value of num1:");
    scanf("%d", &num1);
    printf("enter value of num2:");
    scanf("%d", &num2);

    printf("enter 1 to add \n enter 2 sub \n enter 3 to  mul \n enter 4 to div \n enter 5 module \n enter 6 min \n enter 7 max \n enter 8 eql");
    printf("\n any option select:");
    scanf("%d", &option);

    switch (option)
    {
    case 1:
        ans = num1 + num2;
        printf("ans add is : %.2f", ans);
        break;
    case 2:
        ans = num1 - num2;
        printf("ans sub is : %.2f", ans);
        break;
    case 3:
        ans = num1 * num2;
        printf("ans mul is : %.2f", ans);
        break;
    case 4:
        ans = num1 / num2;
        printf("ans div is : %.2f", ans);
        break;
    case 5:
        ans = num1 % num2;
        printf("ans module is : %.2f", ans);
        break;
    case 6:
        if (num1 < num2)
        {
            printf("num1 is min");
        }
        else
        {
            printf("num2 is min");
        }
        break;
    case 7:
        if (num1 > num2)
        {
            printf("num1 is max");
        }
        else
        {
            printf("num2 is max");
        }
        break;
    case 8:
        if (num1 == num2)
        {
            printf("both are same");
        }
        else
        {
            printf("both are not same");
        }

    default:
        printf("\n invalid");
        break;
    }
    printf("\n good bye");
}