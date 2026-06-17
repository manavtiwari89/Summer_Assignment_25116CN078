// WAP TO CONVERT LOWERCASE TO UPPERCASE  
                                                                           
#include <stdio.h>
int main() 
{
 int i;
char str[100];


printf("ENTER A STRING IN LOWERCASE: ");
scanf("%[^\n]s",str);
for (i = 0; str[i]!='\0'; i++) 
{
if (str[i]>='a'&&str[i]<= 'z') {
str[i]=str[i]-32;
}}
printf("STRING IN UPPERCASE: %s\n",str);
return 0;
}                                                                     