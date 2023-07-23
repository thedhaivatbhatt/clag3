// write a program to findout average and sum for 5 students marks
#include <stdio.h>
void main()
{
    int student[5], count = 0, sum;
    float avg;

    for (count = 0; count < 5; count++)
    {
        printf("enter the mark of student %d:", count + 1);
        scanf("%d", &student[count]);
    }
    for (count = 0; count < 5; count++)
    {
        printf("\n mark of student %d are %d", count + 1, student[count]);
    }
    sum=0;
    for (count = 0; count < 5; count++)
    {
       sum=sum+student[count];
    }
    printf("\n total of marks %d",sum);
    avg=sum/5;
    printf("\n avg of student is %f",avg);
    printf("\n good bye");

}