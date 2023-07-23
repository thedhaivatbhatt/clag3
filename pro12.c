// write a program to findout given number is odd or even
//<,>,>=,<=,==,!=,&&,||

#include<stdio.h>
void main()
{
    int number;
    printf("number enter ");
    scanf("%d",&number);
    if (number % 2 ==0)
    {
      printf("it is even");
    }
    else
    {
        printf("it is odd");
    }
    
}