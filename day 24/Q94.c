// wap to compress a string

#include <stdio.h>
#include <string.h>
int main()
{
int i,count,len;
char string[100]; 
printf("Enter a string: ");
fgets(string, sizeof(string), stdin);
string[strcspn(string, "\r\n")]='\0';

len=strlen(string);
printf("Compressed string: ");
for (i = 0; i < len; )
 {
char current=string[i];
count=0;
while (i < len&&string[i] ==current)
 {
count++;
i++;
}
printf("%c%d",current,count);
}
return 0;
}
