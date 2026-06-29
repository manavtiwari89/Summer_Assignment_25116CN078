// wap to create inventory management system 

#include <stdio.h>
#include <string.h>

int main() 
{
int item_id[15],stock[15],count=0,o=0,i,temp,r;
char names[15][30];

printf("--- Inventory Management System ---\n");
while(o!=4) {
printf("\n1. Add Item\n2. View Stock\n3. Update Stock\n4. Exit\nEnter option: ");
scanf("%d",&o);
while(getchar()!='\n');
if(o==1) {
if(count>=15) 
{
printf("Warehouse full!\n");
}
 else {
printf("Enter Item ID: ");
scanf("%d",&item_id[count]);
while(getchar()!='\n');
printf("Enter Item Name: ");
fgets(names[count],sizeof(names[count]),stdin);
names[count][strcspn(names[count],"\n")]=0;
printf("Enter Initial Stock: ");
scanf("%d",&stock[count]);
printf("Item cataloged!\n");
count++;
}

} 
else if(o==2)
 {
if(count==0)
 {
printf("Inventory empty!\n");
} 
else {
for(i=0;i<count;i++) {
printf("ID: %d | Name: %s | Stock: %d\n",item_id[i],names[i],stock[i]);
}}

}
 else if(o==3) {
printf("Enter Item ID: ");
scanf("%d",&temp);
r=0;
for(i=0;i<count;i++) {
if(item_id[i]==temp) {
r=1;
printf("Enter new stock quantity: ");
scanf("%d",&stock[i]);
printf("Stock updated successfully!\n");
break;
}}

if(!r) 
{
printf("Item ID not found!\n");
}
}}

return 0;
}
