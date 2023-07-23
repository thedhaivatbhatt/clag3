#include<stdio.h>
void main()
{
    float height,ans;
    printf("enter the height");
    scanf("%f",&height);

    if (height<5)
    {
        printf("see the height %.1f",height);
    }
    else
    {
        printf("\n good bye");
    }
}