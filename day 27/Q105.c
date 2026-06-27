// wap to create student record management system 
#include <stdio.h>
#include <string.h>
int main()
 {
int roll[10], marks[10],n,i;
char names[10][30]; 

printf("Enter number of students: ");
scanf("%d",&n);
for (i = 0; i < n; i++) 
{
printf("\nStudent %d Roll: ",i+1);
scanf("%d", &roll[i]);
getchar();

printf("Student %d Name: ", i + 1);
fgets(names[i], sizeof(names[i]), stdin);
names[i][strcspn(names[i], "\r\n")] = '\0';
printf("Student %d Marks: ", i + 1);
scanf("%d", &marks[i]);
}
printf("\n--- Saved Records ---\n");
for (i = 0; i < n; i++)
 {
printf("Roll: %d | Name: %s | Marks: %d\n", roll[i], names[i], marks[i]);}
return 0;
}
