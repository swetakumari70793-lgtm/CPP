/* Write a C program to Enter length and breadth of a rectangle and find its perimeter. */
#include<stdio.h>
int main()
{
    int l , w  , area;
    printf("Enter length ");
    scanf("%d",&l);
    printf("Enter breadth ");
    scanf("%d",&w);
    
    area = l * w;

    printf("\n Area of rectangle is %d \n", area);
    return 0;
}