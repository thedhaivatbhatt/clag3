// write a program to print following pattern
// 2,1,3,4,7,11,18,29,47,76,123,.....3220
#include <stdio.h>
void main()
{
    int first = 2, second = 1, count = 0;
    printf(" %d", first);
    printf(" %d", second);
for(count=0;second<1364;count++)
    {
        first = first + second; // 3
        printf(" %d", first);
        second = first + second; // 4
        printf(" %d", second);
    }

    //     first = first + second; // 7
    //     printf(" %d", first);
    //     second = first + second; // 11
    //     printf(" %d", second);
    //     first = first + second; // 18
    //     printf(" %d", first);
}