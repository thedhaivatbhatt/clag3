#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct time
{
    int hours;
    float minutes_seconed;
    char name[20];
};
struct student
{
    int rollno,total_marks;
    char name[25];
};
void main()
{
    struct time conutry[3];
    int conut;
   for(conut=0;conut<3;conut++)
    {
        printf("enter hours for conutry %d",conut+1);
        scanf("%d",&conutry[conut].hours);
        printf("enter minutes_seconed for conutry %d",conut+1);
        scanf("%f",&conutry[conut].minutes_seconed);
        fflush(stdin);
        printf("enter name for conutry %d",conut+1);
        scanf("%c",&conutry[conut].name);
    }
    for(conut=0;conut<3;conut++)
    {
        printf("\n the time of conutry %d hours : %d minutes_seconed : %f , name :%c ",conut+1,conutry[conut].hours,conutry[conut].minutes_seconed,conutry[conut].name );
    }
    struct student s1;

    printf("\n enter value for student 1 name ");
    scanf("%s",&s1.name);
    printf("enter rollon for student 1");
    scanf("%d",&s1.rollno);
    printf("enter total marks of student 1");
    scanf("%d",&s1.total_marks);
}
