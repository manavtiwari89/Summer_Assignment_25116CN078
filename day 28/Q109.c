// wap to create library management system

#include <stdio.h>
#include <string.h>

int main()
 {
int book_id[15],status[15],count=0,choice=0,i,search_id,found;
char titles[15][40];
printf("---  Library Management System ---\n");
while(choice!=4) 
{
printf("\n1. Add New Book\n");
printf("2. Display Inventory\n");
printf("3. Issue/Return Book\n");
printf("4. Exit\n");
printf("Enter choice: ");
scanf("%d",&choice);
if(choice==1) {
if(count>=15) {
printf("Library shelf full!\n");
} else {
printf("Enter Book ID: ");
scanf("%d",&book_id[count]);
getchar();
printf("Enter Book Title: ");
fgets(titles[count],sizeof(titles[count]),stdin);
titles[count][strcspn(titles[count],"\r\n")]='\0';
status[count]=0;
printf("Book cataloged successfully!\n");
count++;
}
} else if(choice==2) {
if(count==0) {
printf("No books in library!\n");
} else {
printf("\n--- Book List ---\n");
for(i=0;i<count;i++) {
printf("ID: %d | Title: %s | Status: %s\n",book_id[i],titles[i],status[i]==1?"Issued":"Available");
}
}
} else if(choice==3) {
printf("Enter Book ID to update: ");
scanf("%d",&search_id);
found=0;
for(i=0;i<count;i++) {
if(book_id[i]==search_id) {
found=1;
if(status[i]==0) {
status[i]=1;
printf("Book issued successfully!\n");
} else {
status[i]=0;
printf("Book returned successfully to shelf!\n");
}
break;
}
}
if(!found) {
printf("Book ID not found in records.\n");
}
} else if(choice==4) {
printf("Closing library program.\n");
} else {
printf("Invalid option selected!\n");
}
}
return 0;
}
