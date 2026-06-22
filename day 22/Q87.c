// Wap to charcter frequency 

#include <stdio.h>

int main()
{
char str[500], *p = str;
int freq[256]={0};
printf("Enter string: ");
scanf("%499[^\n]",str);
while (*p&&(++freq[(unsigned char)*p++],1));
for (int i = 0; i < 256; i++)
{
freq[i]&&printf("'%c' : %d\n",i,freq[i]);
}
return 0;
}
