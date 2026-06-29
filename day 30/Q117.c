// wap to create student record system using arrays and strings

#include <stdio.h>
#include <string.h>
int main() {
int A[20],count=0,r=0,i,temp,f;
char names[20][30],grade[20][5];
printf("--- System Student record ---\n");
while(r!=4) 
{
printf("\n1. New Entry\n2. View Matrix\n3. Locate ID\n4. Exit\nchoice: ");
scanf("%d",&r);
while(getchar()!='\n');
if(r==1) {
if(count>=20) {
printf("Matrix Limit!\n");
} else {
i=19-count;

printf("ID Key: ");
scanf("%d",&A[i]);
while(getchar()!='\n');
printf("String Label: ");

fgets(names[i],sizeof(names[i]),stdin);

names[i][strcspn(names[i],"\n")]=0;
printf("Class Grade: ");
fgets(grade[i],sizeof(grade[i]),stdin);
grade[i][strcspn(grade[i],"\n")]=0;
printf("Mapped!\n");
count++;
}} 
else if(r==2) 
{
if(count==0) 
{
printf("Empty Data!\n");
} else
{
for(i=19;i>19-count;i--) 
{
printf("Key: %d | Label: %s | Grade: %s\n",A[i],names[i],grade[i]);
}
}}
else if(r==3) {
printf("Target Key: ");
scanf("%d",&temp);
f=0;

for(i=19;i>19-count;i--) {
    
if(A[i]==temp) 
{
printf("Matched! Label: %s | Grade: %s\n",names[i],grade[i]);
f=1;
break;
}
}


if(!f) 
{
printf("Key absent!\n");
}
}}

return 0;
}
