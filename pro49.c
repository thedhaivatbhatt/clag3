//write a program to print and accpet mark of 5 student from user
#include<stdio.h>
void main()
{
    int student[5][5],count=0,std_count=0,total[5],avg_total=0;
    float avg;
    for(std_count=0;std_count<5;std_count++)
    {
        printf("\n enter mark for student %d",std_count+1);
        for(count=0;count<5;count++)
        {
            printf("\n  enter the mark %d",count+1);
            scanf("%d",&student[std_count][count]); 
        }
    }
    for(std_count=0;std_count<5;std_count++)
    {
        printf("\n mark for student %d are \n",std_count+1);
        for(count=0;count<5;count++)
        {
            printf("\n mark of subject %d are %d ",count+1,student[std_count][count]);
        }

    }
    for(std_count=0;std_count<5;std_count++)
    {
        total[std_count]=0;
        for(count=0;count<5;count++)
        {
            total[std_count]=total[std_count]+student[std_count][count];
        }
        printf("\n total of %d student mark is %d",std_count+1,total[std_count]);
    }
    for(count=0;count<5;count++)
    {
        avg_total=avg_total+total[count];
    }
    avg=avg_total/5;
    printf("\n value of avg of all students is %f",avg);
}