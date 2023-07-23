// wirte a program to make cal.
// given below the option
// add
// sub
// mul
// div
// module
// min
// max
// eql
#include<stdio.h>

void main()
{
    int a,b,answer,option;
    printf("enter the value a:");
    scanf("%d",&a);
    printf("enter the value b:");
    scanf("%d",&b);
    printf("\n enter the value of 1 add");
    printf("\n enter the value of 2 sub");
    printf("\n enter the value of 3 mul");
    printf("\n enter the value of 4 div");
    printf("\n enter the value of 5 module");
    printf("\n enter the value of 6 max");
    printf("\n enter the value of 7 min");
    printf("\n enter the value of 8 eql");
    printf("\n select any option from above");
    scanf("%d",&option);
    if(option==1)
    {
        answer=a+b;
        printf("the add is: %d",answer);
    }
    else if (option==2)
    {
        answer=a-b;
        printf("the sub is: %d",answer);

    }
     else if (option==3)
    {
        answer=a*b;
        printf("the mul is: %d",answer);

    }
     else if (option==4)
    {
        answer=a/b;
        printf("the div is: %d",answer);

    }
     else if (option==5)
    {
        answer=a%b;
        printf("the moadule is: %d",answer);

    }
     else if (option==6)
    {
        if (a>b)
        {
            printf("a is greter");
        }
        else
        {
            printf("b is greter");
        }

    }
    else if(option==7)
    {
        if(a<b)
        {

            printf("a is lassthen");
        }
        else
        {
            printf("b is lassthen");
        }
    }
    else if (option==8)
    {
        if(a==b)
        {
            printf("both are eql");
        }
        else
        {

            printf("both are not eql");
        }
    }
 printf("\n good bye");
}