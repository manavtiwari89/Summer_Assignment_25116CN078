// wap to create employee management system 

#include <stdio.h>
#include <string.h>
int main()
 {
int emp_id[10],n,i;
float salary[10]; 
char names[10][30];
printf("Enter number of employees: ");
scanf("%d",&n);
for (i = 0; i < n; i++)

 {
printf("\nEmployee %d ID: ",i+1);
scanf("%d", &emp_id[i]);
getchar();
printf("Employee %d Name: ",i +1);
fgets(names[i], sizeof(names[i]), stdin);
names[i][strcspn(names[i], "\r\n")]= '\0';
printf("Employee %d Salary: ",i +1);
scanf("%f", &salary[i]);
}
printf("\n--- Employee Records Ledger ---\n");

for (i = 0; i < n; i++) 
{
printf("ID: %d | Name: %s | Salary: $%.2f\n", emp_id[i], names[i], salary[i]);
}
return 0;}
