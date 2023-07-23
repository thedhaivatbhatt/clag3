// write a program to print 2 numbered triagnle
#include<stdio.h>
void main()
{
    int count=0,flash=5,tamp=1;
   while (flash>0)//flash=5
   {
     while (count<flash)//count=0 ,flash=5
     {
        printf("%d",tamp);//tamp=1 
        count++;//count=count+1; 
     }
     printf("\n");
     count=0;
     flash--;//flash =flash-1;(5 4 3 2 1) 
     tamp++; //tamp=tamp+1; (1 2 3 4 5)
   }
   
   
   
   
   
   
   
   
    // while (count<5)
    // {
    //     printf("*");
    //     count++;
    // }
    // printf("\n");
    // count=0;

    // while (count<4)
    // {
    //     printf("*");
    //     count++;
    // }
    // printf("\n");
    // count=0;

    // while (count<3)
    // {
    //     printf("*");
    //     count++;
    // }
    // printf("\n");
    // count=0;

    // while (count<2)
    // {
    //     printf("*");
    //     count++;
    // }
    // printf("\n");
    // count=0;

    // while (count<1)
    // {
    //     printf("*");
    //     count++;
    // }
    
}