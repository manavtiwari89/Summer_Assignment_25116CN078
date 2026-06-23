// Wap to find maximum occuring character 


#include <stdio.h>
#include <string.h>

int main() 
{
int max_count=0,i,j;
char str[100],max_char = ' '; 
printf("Enter a string: ");
fgets(str, sizeof(str), stdin);
str[strcspn(str, "\r\n")] ='\0';
while (strlen(str) > 0) {
char current=str[0];
int current_count=0;
for (i=0; str[i]!='\0'; i++)
 {
if (str[i]==current) 
{
current_count++;
}}
if (current_count >max_count)
 {
max_count=current_count;
max_char=current;
}
j=0;
for (i = 0; str[i]!='\0'; i++) 
{if (str[i] !=current) 
{
str[j]=str[i];
j++;
}}
str[j]='\0';
}
if (max_count > 0)
 {
printf("Max occurring character: %c",max_char);
} 
else
 {
printf("String is empty");}
return 0;
}


