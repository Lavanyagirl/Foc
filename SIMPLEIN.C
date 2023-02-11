#include<stdio.h>
#include<conio.h>
int main()
{
float principle,rate,time,SI;
clrscr();
printf("Enter principle amount:");
scanf("%f",&principle);
printf("\nEnter time:");
scanf("%f",&time);
printf("\nEnter rate:");
scanf("%f",&rate);
SI=(principle*time*rate)/100;
printf("Simple Interest=%f",SI);
return 0;
}