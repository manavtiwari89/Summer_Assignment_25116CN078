// Wap to check palindrome string in c
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
bool Palindrome(char str[])
{
char *p=str,*dummy=(str+=strlen(str)-1);
while (p < str) 
{
if (*p!=*str) 
{
return false;
}
p++;
str--;
}
return true;
}

int main() {
char str[100];

printf("Enter a string: ");
scanf("%99s",str); 
if (Palindrome(str)) {
printf("\"%s\" is a palindrome",str);
}
else 
{
printf("\"%s\" is not a palindrome",str);
}
return 0;
}
