//write a program to create a calc.

#include<stdio.h>
int getadd(int num1,int num2)
{
    return num1+num2;
}
int getsub(int num1,int num2)
{
    return num1-num2;
}
int getmul(int num1,int num2)
{
    return num1*num2;
}
float getdiv(int num1,int num2)
{
    return num1/num2;
}
float getmodules(int num1,int num2)
{
    return num1%num2;
}
void max(int num1,int num2)
{
    if(num1>num2)
    {
        printf("num1 is greter");
    }
    else if(num2>num1)
    {
        printf("num2 is grater");
    }
}
void min(int num1,int num2)
{
    if(num1<num2)
    {
        printf("num1 is small");
    }
    else if(num2<num1)
    {
        printf("num2 is small");
    }
}
void eql(int num1,int num2)
{
    if(num1==num2)
    {
        printf("both are same");
    }
    else 
    {
        printf("both are not same");
    }
}
void main()
{
int num1,num2,option,contiune=1;
float ans;
do{
    printf("enter num1:");
    scanf("%d",&num1);
    printf("enter num2:");
    scanf("%d",&num2);
    printf("\nenter 1 add :");
    printf("\nenter 2 sub :");
    printf("\nenter 3 mul :");
    printf("\nenter 4 div :");
    printf("\nenter 5 module :");
    printf("\nenter 6 max :");
    printf("\nenter 7 min :");
    printf("\nenter 8 eql :");
    printf("\nenter option :");
    scanf("%d",&option);
    switch(option)
    {
        case 1:
        ans=getadd(num1,num2);
        printf("the add ans:%f",ans);
        break;
    }
    printf("\nselect any one\n 1 for contiune \n2 for exit");
    scanf("%d",&contiune);
    if(contiune<1 && contiune>2)
    {
        printf("invalid");
        break;
    }
}while(contiune==1);

}
