#include<stdio.h>
int main()
{
    int days , years , weeks , rem_day ;
    printf("Enter Days ");
    scanf("%d",&days);
    years=days/365;
    rem_day=days%365;

    weeks=rem_day/7;
    rem_day=rem_day%7;

    printf("\n Years : %d",years);
    printf("\n Weeks : %d",weeks);
    printf("\n Days : %d\n",rem_day);
    return 0;
}