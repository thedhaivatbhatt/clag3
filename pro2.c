#include<stdio.h>
void main()
{
    int num1,num2,tamp;

    printf("enter the num1:");
    scanf("%d",&num1);
    printf("enter the num2:");
    scanf("%d",&num2);

    tamp=num1;
    num1=num2;
    num2=tamp;

    printf("\n num1: %d",num1);
    printf("\n num2: %d",num2);
}