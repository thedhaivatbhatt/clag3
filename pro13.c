// &&,||
// write a program to findout which number is greter out of given 3 num

#include <stdio.h>
void main()
{
    int a, b, c;
    printf("\n enter the value of a ");
    scanf("%d", &a);
    printf("\n enter the value of b");
    scanf("%d", &b);
    printf("\n enter the value of c");
    scanf("%d", &c);
    if (a > b && a > c)
    {
        printf("a is greter");
    }
    else if (b > c && b > a)
    {
        printf("b is greter");
    }
    else if (c > a && c > b)
    {
        printf("c is greter");
    }
    else
    {
        printf("all are same");
    }
    printf("\n good bye");
}