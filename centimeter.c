/* wrte a C program to enter length in centimeter and convert it into meter and kilometer.*/
#include<stdio.h>
int main()
{
    float cm , m , km;
    printf("Lenght in centimeter ");
    scanf("%f",&cm);
    m=cm/100;
    km=cm/100000;
    printf("Meter = %f \n",m);
    printf("Kilometer = %f\n",km);
    return 0;
}