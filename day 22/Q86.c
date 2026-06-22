// Wap to count words in a sentence 

#include <stdio.h>
#include <stdbool.h>
int Words(char *str)
{
int count=0;
bool W=false;
while (*str&&(*str==' '||*str== '\t'||*str == '\n' ? (W=false) : (!W ? (W =true,++count) : 0),++str));
return count;
}

int main() 
{char str[300];
printf("Enter the sentence: ");
scanf("%299[^\n]",str);
printf("Total number of words: %d\n",Words(str));
return 0;
}

