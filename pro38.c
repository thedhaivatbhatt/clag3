// example of array
#include <stdio.h>
void main()
{
    // decalring a array
    int students[5], count;
    // input using array
   for (count=0;count<5;count++)
    {

        printf("\n enter marks of student %d :", count + 1);
        scanf("%d",&students[count]);
    }
    //output using array
    for (count=0;count<5;count++)
    {
        printf("\n mark of student %d are %d",count+1,students[count]);
    }
}