// wap to remove duplicate characters

#include <stdio.h>
#include <string.h>

int main()
 {
int i,j,k,len;
char string[500]; 

printf("Enter the string: ");
fgets(string, sizeof(string), stdin);
string[strcspn(string,"\r\n")]='\0';
len=strlen(string);

for (i = 0; i < len; i++)
 {
for (j=i+1; j < len; ) 
{
if (string[j]==string[i]) 
{
for (k = j; k<len-1; k++) 
{
string[k]=string[k+1];
}
string[len-1] ='\0';
len--;
}
else {
j++;
}}}

printf("String after removing duplicate: %s",string);
return 0;
}
