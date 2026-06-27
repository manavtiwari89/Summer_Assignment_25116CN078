//Wap to create salary management system 

#include <stdio.h>
#include <string.h>
int main()
 {
int id[10],n, i;
float base[10], allowance[10],net[10];  
printf("Enter number of employees: ");
scanf("%d", &n);
for (i = 0; i < n; i++)
 {
printf("\nEmployee %d ID: ",i+1);
scanf("%d", &id[i]);
printf("Employee %d Base Salary: ",i+1);
scanf("%f",&base[i]);
printf("Employee %d Allowance: ", i+1);
scanf("%f", &allowance[i]);
net[i]=base[i]+allowance[i];
}
printf("\n***Payroll Summary Ledger ***\n");
for (i = 0; i < n; i++) 
{
printf("ID: %d | Base: %.2f | Allowance: %.2f | Net Pay: %.2f\n", id[i], base[i], allowance[i], net[i]);
}
return 0;
}
