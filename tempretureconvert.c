#include<stdio.h>
#include<conio.h>
int main(){
    float fr,cent;
    printf("\n Enter the tempreture of city in fahrenheit degrees :");
    scanf("%f",&fr);
    cent=5.0/9.0*(fr-32);
printf("\n Tempreture in centigrade=%f",cent);
printf("\n\npress any key to exit");
getch(); 
}