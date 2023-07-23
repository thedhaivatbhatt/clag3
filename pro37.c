#include<stdio.h>
void main()
{
    int count=0,space=0;
    printf("1");
    printf("\n");
    for(space=2;space<7;space++)
    {
        printf("1");
        for(count=2;count<space;count++);
        {
            printf(" ");
        }
        printf("%d",count);
        printf("\n");
    }
    for(count=0 ; count<7;count++)
    {
        printf("%d",count+1);

        // count=count+1; value and number add
        // count+1;..... can only num +
    }

}