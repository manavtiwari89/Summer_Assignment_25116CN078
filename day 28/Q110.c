// wap to create bank account system 

#include <stdio.h>
#include <string.h>

int main() {
int acc_no[10],count=0,choice=0,i,search_acc,found;
float balance[10],amount;
char names[10][30];
printf("--- Bank Account Ledger System ---\n");
while(choice!=4) {
printf("\n1. Create Account\n2. Display All\n3. Transaction\n4. Exit\nEnter choice: ");
scanf("%d",&choice);
if(choice==1) {
if(count>=10) {
printf("Database full!\n");
} else {
printf("Enter Account Number: ");
scanf("%d",&acc_no[count]);
getchar();
printf("Enter Holder Name: ");
fgets(names[count],sizeof(names[count]),stdin);
names[count][strcspn(names[count],"\r\n")]='\0';
printf("Enter Initial Balance: ");
scanf("%f",&balance[count]);
printf("Account created!\n");
count++;
}
} else if(choice==2) {
if(count==0) {
printf("No accounts found!\n");
} else {
for(i=0;i<count;i++) {
printf("Acc No: %d | Name: %s | Balance: %.2f\n",acc_no[i],names[i],balance[i]);
}
}
} else if(choice==3) {
printf("Enter Account Number: ");
scanf("%d",&search_acc);
found=0;
for(i=0;i<count;i++) {
if(acc_no[i]==search_acc) {
found=1;
printf("1. Deposit\n2. Withdraw\nChoice: ");
int t_choice;
scanf("%d",&t_choice);
printf("Enter amount: ");
scanf("%f",&amount);
if(t_choice==1) {
balance[i]+=amount;
printf("Deposited! New balance: %.2f\n",balance[i]);
} else if(t_choice==2) {
if(amount>balance[i]) {
printf("Insufficient funds!\n");
} else {
balance[i]-=amount;
printf("Withdrawn! Remaining balance: %.2f\n",balance[i]);
}
}
break;
}
}
if(!found) {
printf("Account not found!\n");
}
}
}
return 0;
}
