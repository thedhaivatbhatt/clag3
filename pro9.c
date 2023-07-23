    // bmi=kg/m*m
    #include<stdio.h>
    void main()
    {
        float bmi,m,weight;
        printf("enter the value of weight");
        scanf("%f",&weight);
        printf("enter the value of m");
        scanf("%f",&m);
        bmi=weight/(m*m);
        printf("ans the bmi :%f ",bmi);
    }