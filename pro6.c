// millenimum year ex 1000,2000,3000,4000
// <,>,>=,<=,!=,+,-,/,*,%,==

#include<stdio.h>
void main()
{
    int year;
    printf("enter the year");
    scanf("%d",&year);
    if(year%1000==0)
    {
        printf("it is  millenimum year");
    }
    else
    {
        printf("it is not  millenimum year");
    }
}
