#include<stdio.h>
#include<stdlib.h>
void main()
{
    int a;
    float b;
    char name;

    printf("enter a :");
    scanf("%d",&a);
    printf("enter b:");
    scanf("%f",&b);
    fflush(stdin);
    printf("enter name :");
    scanf("%c",&name);
}