// write a program to take input of five contry time in hours , minutes, second
#include<stdio.h>
#include<stdlib.h>
struct time
{
    int hours;
    float minutes_second;
    char name;
}country3;
void main()
{
    struct time country1,country2;
    printf("enter country1 hours: ");
    scanf("%d",&country1.hours);
    printf("enter country1 minutes and second: ");
    scanf("%f",&country1.minutes_second);
    fflush(stdin);
    printf("enter country1 first latter: ");
    scanf("%c",&country1.name);
     printf("enter country2 hours: ");
    scanf("%d",&country2.hours);
    printf("enter country2 minutes and second: ");
    scanf("%f",&country2.minutes_second);
    fflush(stdin);
    printf("enter country2 first latter: ");
    scanf("%c",&country2.name);
     printf("enter country3 hours: ");
    scanf("%d",&country3.hours);
    printf("enter country3 minutes and second: ");
    scanf("%f",&country3.minutes_second);
    fflush(stdin);
    printf("enter country3 first latter: ");
    scanf("%c",&country3.name);

    printf("the time of country1 is hours : %d, minutes and second : %f and first latter: %c",country1.hours,country1.minutes_second,country1.name);

}

