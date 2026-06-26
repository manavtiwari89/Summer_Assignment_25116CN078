// Wap to create atm simulation 

#include <stdio.h>

int main() 
{
int pin =1111,temp,r,s=0;
float balance = 10000000.0, amount;
printf("*** Welcome to the ATM Simulation*** \n");
while (s<3) 
{
printf("Enter your 4-digit PIN: ");
scanf("%d",&temp);
if (temp==pin) 
{
break;
}
s++;
printf("Incorrect PIN. Attempts remaining %d\n\n", 3 - s);}

if (s == 3) {
printf("Card blocked due to too many incorrect PIN attempts");
return 0;
}

printf("1.Check Balance\n");
printf("2.Deposit Money\n");
printf("3.Withdraw Money\n");
printf("Enter your choice: ");
scanf("%d",&r);
if (r==1) 
{
printf("Your current balance is: Rs.%.2f\n", balance);
}
else if (r==2) 
{
printf("Enter deposit amount: Rs. ");
scanf("%f",&amount);
if (amount > 0) 
{
balance=balance+amount;


printf("Deposit successful! New balance: Rs. %.2f\n",balance);
} else {
printf("Invalid amount!\n");}
} else if (r == 3)

{
printf("Enter withdrawal amount: Rs. ");
scanf("%f",&amount);
if (amount>balance)
{
printf("Insufficient balance! Transaction failed.\n");
} else if (amount <= 0) {
printf("Invalid amount!\n");
} else {
balance = balance-amount;
printf("Withdrawal successful! Remaining balance:Rs. %.2f\n", balance);
}} 
else {
printf("Invalid choice selected!\n");
}
return 0;
}
