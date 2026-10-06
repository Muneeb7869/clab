#include<stdio.h>
void main()

{
int year;
printf("Enter the year (YYYY): ");
scanf("%d",&year);
if(year%4==0 && year%100!=0 || year%400==0)
printf("\nThe Given year %d is a leap year", year);
else
   printf("\n The Given year %d is Not a Leap year", year);
}
