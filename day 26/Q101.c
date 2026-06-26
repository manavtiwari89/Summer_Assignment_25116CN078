// Wap to create number guessing game

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
int secret,guess=0,attempts=0;
srand(time(NULL));
secret=(rand() %50)+1;
printf("I am thinking of a number between 1 and 50\n");
while (guess!=secret) 
{
printf("Enter your guess: ");
scanf("%d",&guess);
attempts++;
if (guess>secret) 
{
printf("Too high! Try again\n");} 
else if (guess<secret) 
{
printf("Too low! Try again\n");
}
else {
printf("Correct! You found it in %d attempts",attempts);
}}
return 0; 
}
