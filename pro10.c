// write a program to findout which a smaller out of given findout office is samller out of given 2 offices
#include <stdio.h>
void main()
{
    int height1, breath1, height2, breath2, office1, office2;
    printf("\n enter the value of height1:");
    scanf("%d", &height1);
    printf("\n enter the value of breath1:");
    scanf("%d", &breath1);
    printf("\n enter the value of height2:");
    scanf("%d", &height2);
    printf("\n enter the value of breath2:");
    scanf("%d", &breath2);
    office1 = height1 * breath1;
    office2 = height2 * breath2;
    if (office1 < office2)
    {
        printf("the size of office1 is smaller");
    }
    else
    {
        printf("the size of office2 is smaller");
    }
    printf("\n good bye");
}