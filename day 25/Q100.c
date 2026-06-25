// Wap to sort words by length

#include <stdio.h>
#include <string.h>
int main()
 {
int i,j,k,n=0,start[50],len[50];
char string[200],temp[200];
 
printf("Enter a sentence: ");
fgets(string, sizeof(string), stdin);
string[strcspn(string,"\r\n")]='\0';

int total_len=strlen(string);
int in_word=0,start_idx = 0,count =0;
for (i = 0; i <=total_len;i++)
 {
if (string[i] != ' ' &&string[i] != '\0') {
if (!in_word) 
{
start_idx =i;
in_word = 1;
}

count++;
} 
else {
if (in_word)
 {
start[n] =start_idx;
len[n]=count;
n++;
in_word=0;
count =0;
}
}}
for (i = 0; i < n-1;i++)
 {
for (j = i+1; j < n; j++)
 {
if (len[i] >len[j])
 {
int t_len=len[i];len[i]=len[j];len[j] =t_len;
int t_start=start[i];start[i]=start[j]; start[j]=t_start;
}
}}
printf("Words sorted by length: ");
for (i = 0; i < n; i++)
 {
for (j = start[i]; j < start[i] +len[i];
 j++) 
{
printf("%c",string[j]);
}
printf(" ");
}
return 0;}
