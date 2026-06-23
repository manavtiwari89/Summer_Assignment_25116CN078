// WAP to check anagram strings 
#include <stdio.h>
#include <string.h>


int main()
 {
int i,r=0,s=0;
char s1[100],s2[100];

printf("Enter first string: ");fgets(s1,sizeof(s1),stdin);
printf("Enter second string: ");fgets(s2,sizeof(s2),stdin);
s1[strcspn(s1, "\r\n")]='\0'; s2[strcspn(s2, "\r\n")]='\0';
if (strlen(s1)!=strlen(s2))
{ printf("Not Anagram");
 return 0;
 }
int counts[256]={0};
for (i = 0; s1[i]!='\0'; i++) 
{
counts[(unsigned char)s1[i]]++;
counts[(unsigned char)s2[i]]--;
}
for (i = 0; i < 256; i++)
{
if (counts[i] != 0) 
{ s = 1; break; }
}
if (s==0)
{
printf("Strings are Anagrams");}
else 
{ printf(" Strings are Not Anagram");}
return 0;
}
