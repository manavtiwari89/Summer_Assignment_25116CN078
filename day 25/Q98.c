// wap to find common characters in string 

#include <stdio.h>
#include <string.h>
int main()
 {
int i, j,len1,len2;
char string1[100], string2[100];
 
printf("Enter first string: ");
fgets(string1,sizeof(string1),stdin);
printf("Enter second string: ");
fgets(string2,sizeof(string2),stdin);

string1[strcspn(string1,"\r\n")]= '\0'; 
string2[strcspn(string2, "\r\n")] ='\0';
len1=strlen(string1); 
len2 =strlen(string2);

printf("Common characters: ");
for (i = 0; i<len1; i++) {
if (string1[i] ==' ') 
{continue; }
for (j = 0; j<len2; j++)
 {
if (string1[i]==string2[j]) 
{
printf("%c ",string1[i]);
string2[j]=' '; 
break;
}
}}
return 0;
}
