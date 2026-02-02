#include<stdio.h>
#include<math.h>
int main()
{
    int num;
    float st , ct;

    printf("Enter any number ");
    scanf("%d",&num);
    st=sqrt(num);
    ct=cbrt(num);
    printf("Square root = %f \n",st);
    printf("Cube root = %f \n",ct);
    return 0;
}