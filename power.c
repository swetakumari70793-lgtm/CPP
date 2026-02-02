#include<stdio.h>
#include<math.h>
int main()
{
    int base , power , result;
    printf("Enter base & power any number ");
    scanf("%d %d",&base,&power);
    result=pow(base,power);
    printf("%d^%d =%d \n",base,power,result);
    return 0;
}