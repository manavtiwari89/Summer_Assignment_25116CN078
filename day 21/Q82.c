// WAP TO REVERSE A STRING
                                                                   
#include <stdio.h>
int main() 
{
char s[100],str[100];
int length=0,i,j;
printf("ENTER A STRING: ");
scanf("%[^\n]s",str);

for (i = 0; str[i] != '\0'; i++) 
{length++;
}
j= 0;
for (i = length - 1; i >= 0; i--)
 {
s[j]=str[i];
j++;

}
s[j]='\0';

printf("REVERSED STRING: %s\n",s);
return 0;
}