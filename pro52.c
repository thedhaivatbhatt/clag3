//example of array structure
#include<stdio.h>
#include<stdlib.h>
struct time
{
    int hours;
    float minutes_seconed;
    char name;
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
}
