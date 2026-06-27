// wap to create marksheet generation system 

#include <stdio.h>
int main()
 {
int roll[10], math[10], sci[10],total[10],n,i;
float per[10]; 

printf("Enter number of students: ");
scanf("%d", &n);
for (i = 0; i < n; i++)
 {
printf("\nEnter Roll Number for student %d: ", i + 1);
scanf("%d", &roll[i]);
printf("Enter Math Marks: ");
scanf("%d", &math[i]);
printf("Enter Science Marks: ");
scanf("%d", &sci[i]);
total[i] = math[i] + sci[i];
per[i] = total[i] / 2.0;
}
printf("\n====================================\n");
printf("        STUDENT MARKSHEETS          \n");
printf("====================================\n");
for (i = 0; i < n; i++) {
printf("Roll No: %d\n", roll[i]);
printf("Math: %d | Science: %d\n", math[i], sci[i]);
printf("Total: %d/200 | Percentage: %.2f%%\n", total[i], per[i]);
if (per[i] >= 40.0) {
printf("Result: PASSED\n");
} else {
printf("Result: FAILED\n");
}
printf("------------------------------------\n");
}
return 0;}
