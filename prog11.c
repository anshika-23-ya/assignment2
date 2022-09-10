//wap to take time as input in below given format and convert the time format  and display the result as given below.
//User input date format -"HH hour and MM minute"
//Ex 11:25 converted "11 hour and 25 minutes"
#include<stdio.h>
int main()
{
    int HH,MM;
    printf("Enter_the_time");
    scanf("%d %d",&HH,&MM);
    printf(" %d-hour and %d-month",HH,MM);
    return 0;
}