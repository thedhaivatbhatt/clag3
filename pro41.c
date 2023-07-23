// wirte a program to accept name as an input from user
// copy use to print output 25 char 
#include <stdio.h>
void main()
{
    char name[25];
    int count = 0, copy;
    printf("enter your name :");
    for (count = 0; count < 25; count++)
    {
        scanf("%c", &name[count]);
        if (name[count] == '\n')
        {
            break;
        }
    }
    copy=count;
    printf("\n your name is \n");
    for(count=0;count<=copy;count++)
    {
        printf("%c",name[count]);
    }
}