// wap to create contact mangement system 

#include <stdio.h>
#include <string.h>

int main() {
int count=0,choice=0,i,found;
char names[15][30],phone[15][15],search_name[30];
printf("--- Contact Management System ---\n");
while(choice!=4) {
printf("\n1. Add Contact\n2. View Contacts\n3. Search Contact\n4. Exit\nEnter choice: ");
scanf("%d",&choice);
if(choice==1) {
if(count>=15) {
printf("Directory full!\n");
} else {
getchar();
printf("Enter Name: ");
fgets(names[count],sizeof(names[count]),stdin);
names[count][strcspn(names[count],"\r\n")]='\0';
printf("Enter Phone Number: ");
fgets(phone[count],sizeof(phone[count]),stdin);
phone[count][strcspn(phone[count],"\r\n")]='\0';
printf("Contact saved!\n");
count++;
}
} else if(choice==2) {
if(count==0) {
printf("No contacts found!\n");
} else {
for(i=0;i<count;i++) {
printf("Name: %s | Phone: %s\n",names[i],phone[i]);
}
}
} else if(choice==3) {
getchar();
printf("Enter Name to search: ");
fgets(search_name,sizeof(search_name),stdin);
search_name[strcspn(search_name,"\r\n")]='\0';
found=0;
for(i=0;i<count;i++) {
if(strcmp(names[i],search_name)==0) {
printf("Found! Phone: %s\n",phone[i]);
found=1;
break;
}
}
if(!found) {
printf("Contact not found!\n");
}
}
}
return 0;
}
