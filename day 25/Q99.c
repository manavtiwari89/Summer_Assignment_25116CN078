// wap to sort names alphabetically 

#include <stdio.h>
#include <string.h>
int main() 
{
int n,i,j,k,swap;
char names[10][50], temp[50];
 
printf("How many names (up to 10): ");
 scanf("%d",&n);
getchar(); 
for (i = 0; i<n; i++) 
{
printf("Enter name %d: ",i+1);
fgets(names[i],sizeof(names[i]),stdin);
names[i][strcspn(names[i],"\r\n")] ='\0';
}
for (i = 0; i <n-1;i++)
 {
for (j = 0; j <n-i-1; j++) 
{
swap=0;
for (k=0;names[j][k]!= '\0'||names[j+1][k] !='\0'; k++) 
{
if (names[j][k] >names[j+1][k])
 {
swap=1;
break;
} 
else if (names[j][k] <names[j+1][k]) 
{
break;
}}
if (swap==1) 
{
strcpy(temp,names[j]);
strcpy(names[j],names[j+1]);
strcpy(names[j+1],temp);
}}}

printf("Sorted names:\n");
for (i = 0; i < n; i++)
 {
printf("%s\n", names[i]);
}
return 0;}
