#include<stdio.h>
#include<conio.h>
int main(){
    int a1,a2,a3,a4,a5,aggr;
    float per;
    printf("\nEnter marks in 5 subjects");
    scanf("%d %d %d %d %d",&a1,&a2,&a3,&a4,&a5);
    aggr=a1+a2+a3+a4+a5;
    per=aggr/5;
    printf("\nAggregate makrs=%d",aggr);
    printf("\npercentage Marks=%f",per);
    printf("\n\nPress any key to exit");
    getch();
}