// #example of function without argument with retrun 
// write a program to find area of cricle
#include<stdio.h>
float getpi()
{
    float pi = 3.141592;
    return pi;
}
void main()
{
    float redius,pi,ans;
    printf("enter value of redius:");
    scanf("%f",&redius);
    pi=getpi();
    ans=redius*redius*pi;
    printf("the area of cricle is %f",ans);
}