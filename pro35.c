// write a program to print following pattern
// 1,5,12,22,35,51,70,92,117,145,...3000
// --> 4 7 10 13 16 19
//--> 3 3 3 3 3
#include <stdio.h>
void main()
{
    int number = 1, tamp = 4;
    printf(" %d", number); // 1
    for (number = 1; number < 2882; tamp = tamp + 3)
    {
        number = number + tamp; // 5
        printf(" %d", number);
    }

    // tamp=tamp+3;//7
    // number=number+tamp;
    // printf(" %d",number);
    //   tamp=tamp+3;
    // number=number+tamp;
    // printf(" %d",number);
    //   tamp=tamp+3;
    // number=number+tamp;
    // printf(" %d",number);
    //   tamp=tamp+3;
    // number=number+tamp;
    // printf(" %d",number);
    //   tamp=tamp+3;
    // number=number+tamp;
    // printf(" %d",number);
}