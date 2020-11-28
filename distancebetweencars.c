#include<stdio.h>
#include<conio.h>
int main()
{
    float km,m,cm,ft,inch;
    printf("\n Enter the distance in kilometers:");
    scanf("%f",&km);
    m=km*1000;
    cm=m*100;
    inch=cm/2.54;
    ft=inch/12;
    printf("\n Distence in meters:%f",m);
    printf("\n Distance in centimeter=%f",cm);
    printf("\n Distance in feet=%f",ft);
    printf("\n Distance in inches=%f",inch);
    printf("\n\n\n\nPress any key to exit");
    getch();
    }