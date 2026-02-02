#include<stdio.h>
int main()
{
    float fahrenheit , celsius ;
    printf("Enter temperature in fahernheit ");
    scanf("%f",&celsius);
    fahrenheit=(1.8*celsius)+32;
    printf("Fahrenheit = %f",fahrenheit);
    return 0;
}