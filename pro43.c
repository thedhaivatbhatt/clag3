// write a program to accept name as an input from user and print in reverse
#include<stdio.h>
void main()
{
    char name [25];
    int count =0,copy;
    printf("enter your name");
    for(count=0;count<25;count++)
    {
        scanf("%c",&name[count]);
        if(name[count]=='\n')
        {
            break;
        }
    }
    copy=count;
    for(count=copy; count>=0;count--)
    {
        printf("%c",name[count]);
    }
}
