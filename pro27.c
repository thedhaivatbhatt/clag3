// write a program to print following pattern
// 1 8 27 64 ....1000

#include<stdio.h>
void main()
{
    int number=1,ans=0;
    printf(" %d",number);
    
    while (ans<=9261)
    {
    
    number=number+1;//2
    ans=number*number*number;//8
    printf(" %d",ans);
    
    }
    
    
    
    // number=number+1;//3
    // ans=number*number*number;//27
    // printf(" %d",ans);
    // number=number+1;//4
    // ans=number*number*number;
    // printf(" %d",ans);

}