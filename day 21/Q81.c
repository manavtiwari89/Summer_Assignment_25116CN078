// WAP TO FIND STRING LENGTH WITHOUT STRLEN()

#include <stdio.h>

int main() 
{
int length=0,i;

char str[100];

printf("ENTER A STRING: ");
scanf("%[^\n]s",str);


for (i = 0; str[i]!='\0'; i++) 
{length++;
}
printf("LENGTH OF THE STRING IS: %d\n",length);

return 0;
}