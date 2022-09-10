/*WAP to find the area of the circle. Take radius of circle from user as input and print the
result in below given format.*/
#include<stdio.h>
int main()
{
    int r;
    float a;
    printf("Enter the radius");
    scanf("%d",&r);
    a =3.14*r*r;
    printf("Area_of_the_circle_is%.2f",a);
    return 0;
}