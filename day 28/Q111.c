// wap to create ticket booking system 

#include <stdio.h>
#include <string.h>

int main() {
int t_id[10],count=0,choice=0,i,search_id,found;
char names[10][30];
printf("--- Ticket Booking Ledger System ---\n");
while(choice!=4) {
printf("\n1. Book Ticket\n2. View Bookings\n3. Cancel Ticket\n4. Exit\nEnter choice: ");
scanf("%d",&choice);
if(choice==1) {
if(count>=10) {
printf("No tickets available!\n");
} else {
t_id[count]=1001+count;
getchar();
printf("Enter Passenger Name: ");
fgets(names[count],sizeof(names[count]),stdin);
names[count][strcspn(names[count],"\r\n")]='\0';
printf("Ticket Booked! Your Ticket ID is: %d\n",t_id[count]);
count++;
}
} else if(choice==2) {
if(count==0) {
printf("No bookings found!\n");
} else {
for(i=0;i<count;i++) {
if(t_id[i]!=0) {
printf("Ticket ID: %d | Name: %s\n",t_id[i],names[i]);
}
}
}
} else if(choice==3) {
printf("Enter Ticket ID to cancel: ");
scanf("%d",&search_id);
found=0;
for(i=0;i<count;i++) {
if(t_id[i]==search_id) {
found=1;
t_id[i]=0;
strcpy(names[i],"CANCELLED");
printf("Ticket cancelled successfully!\n");
break;
}
}
if(!found) {
printf("Ticket ID not found!\n");
}
}
}
return 0;
}
