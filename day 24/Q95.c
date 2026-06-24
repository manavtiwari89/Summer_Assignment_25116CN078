// wap to find the longest word

#include <stdio.h>
#include <string.h>
int main() 
{

int i,temp=0,max=0,cur =0, s = 0;
char string[200];
 
printf("Enter  sentence: ");
fgets(string, sizeof(string),stdin);

string[strcspn(string,"\r\n")]='\0';
for (i = 0; string[i]!='\0'; i++) 
{
if (string[i]!= ' ') 
{
if (cur==0)
 {
s=i;
}
cur++;
}


if (string[i]==' '||string[i+1]=='\0') {
if (cur>max) 
{
max=cur;
temp=s;
}
cur=0;
}
}
printf("Longest word: ");
for (i=temp;i<temp+max;i++) 
{
printf("%c",string[i]);
}
return 0;
}
