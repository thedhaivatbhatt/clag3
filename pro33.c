// write a c program to calc. final elec. bill base upon below given criteria take monthly elec. unit from user as input.
// units                   price per unit 
// <100                        1
// >100 &  <200                2
// >200 &  <300                3
// >300 &  <400                4
// >400                        5

#include<stdio.h>
void main()
{
    int unit,price,amount;
    printf("enter value of unit:");
    scanf("%d",&unit);
if(unit<100)
{
    price=1;
}
else if (unit >=100 && unit <200)
{
    price=2;
}
else if (unit>=200 && unit <300)
{
    price=3;
}
else if (unit>=300 && unit <400)
{
    price=4;
}
else
{
    price=5;
}
amount=price*unit;
printf("total amount to pay %d",amount);

}