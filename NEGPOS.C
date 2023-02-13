#include<stdio.h>
#include<conio.h>
void main()
{
int num;
clrscr();
printf("Enter a number:");
scanf("%d",&num);
if(num<0)
printf("It is a negative number.");
else if(num>0)
printf("It is a positive numnber.");
else
printf("It is 0.");
getch();
}

