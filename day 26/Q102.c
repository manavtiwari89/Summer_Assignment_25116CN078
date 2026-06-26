// wap to create voting eligibility system

#include <stdio.h>

int main()
{
int age, remaining;
printf("Enter your age: ");
scanf("%d",&age);
if (age>=18)
{
printf("You are eligible to vote!\n");
printf("Ensure you have a valid Voter ID");
} 
else 
{
remaining=18-age;
printf("You are not eligible to vote yet.\n");
printf("You need to wait %d more year to become eligible.\n",remaining);
}
return 0;}
