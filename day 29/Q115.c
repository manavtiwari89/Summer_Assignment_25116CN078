// Wap to create menu driven string operating system

#include <stdio.h>
#include <string.h>

int main() 
{
int o=0,temp;
char str1[100],str2[100];
printf("--- String Operation System ---\n");
while(o!=5)
 {
printf("\n1. Length\n2. Copy\n3. Concatenate\n4. Compare\n5. Exit\nEnter option: ");
scanf("%d",&o);
while(getchar()!='\n');
if(o==1) 
{
printf("Enter string: ");
fgets(str1,sizeof(str1),stdin);
str1[strcspn(str1,"\n")]=0;
printf("Length: %d\n",(int)strlen(str1));
} 
else if(o==2)
 {
printf("Enter source string: ");
fgets(str1,sizeof(str1),stdin);
str1[strcspn(str1,"\n")]=0;
strcpy(str2,str1);
printf("Copied String: %s\n",str2);
} 
else if(o==3) {
printf("Enter first string: ");
fgets(str1,sizeof(str1),stdin);
str1[strcspn(str1,"\n")]=0;
printf("Enter second string: ");
fgets(str2,sizeof(str2),stdin);

str2[strcspn(str2,"\n")]=0;
strcat(str1,str2);
printf("Joined String: %s\n",str1);
} 
else if(o==4) {
printf("Enter first string: ");
fgets(str1,sizeof(str1),stdin);
str1[strcspn(str1,"\n")]=0;
printf("Enter second string: ");
fgets(str2,sizeof(str2),stdin);
str2[strcspn(str2,"\n")]=0;

temp=strcmp(str1,str2);
if(temp==0) 
{
printf("Strings are equal.\n");
} else if(temp>0)
 {
printf("First string is greater.\n");
} else {
printf("Second string is greater.\n");
}}}

return 0;}
