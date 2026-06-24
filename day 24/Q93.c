// Wap to check string rotation

#include <stdio.h>
#include <string.h>
int main() 
{
int i, j,len,found;
char string1[100],string2[100];

printf("Enter  the first string: "); 
fgets(string1, sizeof(string1), stdin);

printf("Enter second string: "); 
fgets(string2, sizeof(string2), stdin);
string1[strcspn(string1, "\r\n")] = '\0'; string2[strcspn(string2, "\r\n")] = '\0';
len=strlen(string1);
if (len !=strlen(string2))
{ printf("Not a rotation");
 return 0;
 }
for (i = 0; i < len; i++)
 {
if (string1[i]==string2[0]) 
{
found=1;
for (j = 0; j < len; j++) 
{
if (string1[(i+j) % len]!=string2[j])
 {
found=0;
break;
}}
if (found==1)
 { printf("Strings are rotations of each other"); 
return 0; }
}}
printf("Not a rotation");
return 0;
}

