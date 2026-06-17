// WAP TO COUNT VOWELS AND CONSONANTS                                                       
                                                                                                  
                                                                    
#include <stdio.h>
int main() 
{
 int c=0,i,v=0;
char str[100];

printf("ENTER A STRING: ");

scanf("%[^\n]s",str);


for (i = 0; str[i]!='\0'; i++) 
{
if ((str[i] >='a'&&str[i]<='z')||(str[i] >= 'A'&&str[i]<= 'Z')) 
{switch (str[i]) 
    {
case 'a':
case 'e':
case 'i':
case 'o':
case 'u':
case 'A':
case 'E':
case 'I':
case 'O':
case 'U':

v++;
break;
default:
c++;
}}}
printf("TOTAL VOWELS: %d\n",v);
printf("TOTAL CONSONANTS: %d\n",c);
return 0;
}                                                                     