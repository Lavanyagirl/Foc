#include<stdio.h>
#include<conio.h>
int main()
{
char operator;
float num1, num2, result = 0;
clrscr();
printf("Enter any one operator like +,-,*,/:");
scanf("%c",&operator);
printf("Enter the values of operands num1 and num2:");
scanf("%f%f",&num1,&num2);
switch(operator)
{
case '+':result = num1 + num2;
break;
case '-':result = num1 - num2;
break;
case '*':result = num1 * num2;
break;
case '/':result = num1 / num2;
break;
default:printf("Invalid operator");
}
printf("The value = %f",result);
//return 0;
getch();
}
