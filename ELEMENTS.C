#include<stdio.h>
#include<conio.h>
void main()
{
int arr [100],size,i,sum=0;
clrscr();
printf("Enter array size:");
scanf("%d",&size);
printf("Enter array element:");
for(i=0;i<size;i++)
scanf("%d",&arr[i]);
for(i=0;i<size;i++)
sum=sum+arr[i];
printf("Sum of the array=%d",sum);
getch();
}
