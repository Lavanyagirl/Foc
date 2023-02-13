#include<stdio.h>
#include<conio.h>
void main()
{
int number1,number2,sum;
clrscr();
printf("Enter two integers:");
scanf("%d %d",&number1,&number2);
sum=number1+number2;
printf("%d+%d=%d",number1,number2,sum);
getch();
}
