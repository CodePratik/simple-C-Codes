#include<stdio.h>
#include<conio.h>
int main(){
    int l,b,r,area1,perimeter;
    float area2,circum;
    printf("\n Enter Lenght & Breadth of Rectangle");
    scanf("%f %f",&l,&b);
area1=l*b;
perimeter=2*l+2*b;
printf("\nArea of Rectangle=%d",area1);
printf("\nPerimeter of Rectangle=%d",perimeter);
printf("\n\n Enter Radius of circle");
scanf("%d",&r);
area2=3.14*r*r;
circum=2*3.14*r;
printf("Area of Circle=%f",area2);
printf("\n Circumference of circle=%f",circum);
printf("\n\n\n\n\nPress any key to exit");
getch();
}