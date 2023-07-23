// write a program to find factorial of user given number
#include <stdio.h>
void main()
{
    int number, ans, tamp;
    printf("enter the value :");
    scanf("%d", &number);
    ans = number * (number - 1);
    tamp = number - 2;
    if (number < 0)
    {
        printf("invalid");
    }
    else
    {
        if (number <= 2)
        {
            printf("%d", number);
        }
        else
        {
            do
            {
                ans = ans * tamp;//ans(number*number),tamp(number)
                tamp--;
            } while(tamp>0);
            printf("the value ans is %d",ans);
        }
    }
}