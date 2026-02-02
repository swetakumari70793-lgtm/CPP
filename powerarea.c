/* Write a C program to Enter length and breadth of a rectangle and find its perimeter and area.*/
#include<stdio.h>
int main()
{
    int l , w , p , area;
    printf("Enter length ");
    scanf("%d",&l);
    printf("Enter breadth ");
    scanf("%d",&w);
    p = 2* (l+w);
    area = l * w;
    printf("\n Perimmeter of rectancle is %d",p);
    printf("\n Area of rectangle is %d \n", area);
    return 0;
}