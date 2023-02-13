#include<stdio.h>
#include<conio.h>
void main()
{
int age;
clrscr();
printf("Enter the age of a person:");
scanf("%d",&age);
if(age<17)
printf("\n Person is not eligible for voting");
else if(age>=18)
printf("\n Person is eligible for voting");
getch();
}