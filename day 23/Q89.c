// Wap to find first non repeating character

#include <stdio.h>
int main() {
char str[500],*a =str;
int freq[256]={0};
printf("Enter a string: ");
scanf("%499[^\n]",str);
while (*a&&(++freq[(unsigned char)*a++],1));

{a=str;}
while (*a&&freq[(unsigned char)*a]!=1&&++a);

{*a ? printf("First non-repeating character: %c\n",*a) : printf("No non-repeating character found");}
return 0;
}
