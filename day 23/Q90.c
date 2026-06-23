 // Wap to find first  repeating character

#include <stdio.h>
#include <string.h>

int main()
 {
int i,j,length;
char str[100],temp='\0'; 
printf("Enter a string: ");
fgets(str, sizeof(str),stdin);
str[strcspn(str, "\n")]='\0';
length=strlen(str);
for (i = 0; i < length; i++)
 {
for (j=i+1; j < length;j++) 
{
if (str[i]==str[j]) {
temp=str[i];
break;
}
}
if (temp!='\0') 
{break;
}}
if (temp !='\0') {
printf("The first repeating character is: '%c' ",temp);
} 
else 
{
printf("No repeating characters found");
}
return 0;
}
