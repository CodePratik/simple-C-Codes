#include<stdio.h>
#include<conio.h>
int main(){
    int x,y,z;
 printf("\nEnter the Numbers at location x:");
 scanf("%d",&x);
 printf("\nEnter the number at location y:");
 scanf("%d",&y);
 printf("\nEnter the number at location z:");
 scanf("%d",&z);
 x=y;
 y=z;
 z=x;
 printf("\nNew number at location x =%d",x);
 printf("\nNew number at location y=%d",y);
 printf("\n\nPress any key to exit");
 getch();
}