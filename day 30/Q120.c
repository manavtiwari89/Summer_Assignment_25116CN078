// wap to develop complete mini project using arrays,Strings and functions.

#include <stdio.h>
#include <string.h>

void insert_staff(int A[], char names[][40], int *count) {
int i;

if(*count>=15)
{
printf("Matrix Overflow!\n");
}
else {
i=14-*count;
printf("Staff Key ID: ");
scanf("%d",&A[i]);
while(getchar()!='\n');
printf("String Label: ");
fgets(names[i],sizeof(names[i]),stdin);

names[i][strcspn(names[i],"\n")]=0;
printf("Registered!\n");
(*count)++;
}}

void display_staff(int A[], char names[][40], int count) {
int i;
if(count==0) 
{
printf("Zero Records!\n");
} else {
for(i=14;i>14-count;i--) {
printf("Code: %d | Name: %s\n",A[i],names[i]);
}}}


void search_staff(int A[], char names[][40], int count) {
int i,temp,f=0;
if(count==0) {
printf("Zero Records Available!\n");
return;
}
printf("Target Code: ");
scanf("%d",&temp);
for(i=14;i>14-count;i--) 
{
if(A[i]==temp) {
printf("Matched! Name: %s\n",names[i]);
f=1;
break;
}
}
if(!f) 
{
printf("Code Missing!\n");
}}

int main()
{
int A[15],count=0,r=0;
char names[15][40];
printf("---  Staff management System ---\n");
while(r!=4) {
printf("\n1.Entry\n2. Registered staff\n3. Match ID\n4. Exit\nOption: ");
scanf("%d",&r);
while(getchar()!='\n');
if(r==1) {
insert_staff(A,names,&count);
} else if(r==2) {
display_staff(A,names,count);
} else if(r==3) {
search_staff(A,names,count);

}
}
return 0;
}
