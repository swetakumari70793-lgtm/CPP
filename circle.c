/* Write a C program to Enter radius of a circle and find diameter ,circumference and area.*/
#include<stdio.h>
int main()
{
    float  area , radius , diameter , circumference;
    printf("Enter Radius ");
    scanf("%f",&radius);
    area=3.14*radius*radius;
    circumference=2*3.14*radius;
    diameter=2*radius;

    printf("\n Diameter of circle is %f ",diameter);
    printf("\n Area of circle is %f ", area);
    printf("\n Circumference of circle is %f \n", circumference);

    
    return 0;
}