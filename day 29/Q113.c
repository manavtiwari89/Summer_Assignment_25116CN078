// wap to create a menu driven calculator

#include <stdio.h>
int main()
 {
int option=0;
float num1,num2,temp;
printf("*** Calculator***\n");
while(option!=5)
 {
printf("\n1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Exit\nEnter option: ");
scanf("%d",&option);
if(option>=1&&option<=4) 
{
printf("Enter two numbers: ");
scanf("%f %f",&num1,&num2);
if(option==1) 
{
temp=num1+num2;
printf("Result: %.2f\n",temp);
} 
else if(option==2)
 {
temp=num1-num2;
printf("Result: %.2f\n",temp);
} 
else if(option==3) 
{
temp=num1*num2;
printf("Result: %.2f\n",temp);
} 
else if(option==4) 
{
if(num2==0) {
printf("Error! Division by zero.\n");
} else {
temp=num1/num2;
printf("Result: %.2f\n",temp);
}
}}
 else if(option==5) {
printf("Exiting calculator.\n");
} 
else {
printf("Invalid choice!\n");
}
}
return 0;}
