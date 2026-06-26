// wap to create quiz application 

#include <stdio.h>
int main()
 {
int temp=0;
char result; 

printf("-***Welcome to the Quick Quiz Application ***\n");
printf("Q1. Who created c language?\n");
printf("A. Dennis Ritchie\nB. Steve Jobs\nC. Larry Page\nD. Guido van Rossum\n");
printf("Your answer: ");
scanf(" %c",&result);
if (result=='A'||result== 'a') 
{
printf("Correct!\n");
temp++;
} 
else {
printf("Wrong! Correct answer is A.\n");
}
printf("Q2. Which type of language is c ?\n");
printf("A. High level\nB. Middle level\nC. Low level\nD. None of these\n");
printf("Your answer: ");
scanf(" %c",&result);
if (result=='B'||result=='b') 
{
printf("Correct!\n");
temp++;
} 
else {
printf("Wrong! Correct answer is B\n");}


printf("Q3. How many keywords are in c?\n");
printf("A. 23\nB. 45\nC. 32\nD. 99\n");
printf("Your answer: ");
scanf(" %c",&result);
if (result=='C'||result=='c')
 {
printf("Correct!\n");
temp++;
} 
else {
printf("Wrong! Correct answer is C\n");}


printf("*** Quiz Completed***\n");
printf("Your final score is: %d out of 3\n",temp);
return 0;}


