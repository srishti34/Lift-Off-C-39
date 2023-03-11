#include<stdio.h>
int main()
{
    float r,dia,cir,area;
    printf("enter te radius:");
    scanf("%f",&r);
    dia= 2*r;
    cir= 2*3.14*r;
    area= 3.14*r*r;
    printf("diameter of circle= %f\n",dia);
    printf("circumference of circle= %f\n",cir);
    printf("area of circle= %f\n",area);
    return 0;
}