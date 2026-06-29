// wap to create mini Library system 


#include <stdio.h>
#include <string.h>

int main()
{
int A[15],count=0,r=0,i,temp,f;
char names[15][40];

printf("--- library System ---\n");
while(r!=4)
{
printf("\n1.Entry\n2. See Inventory\n3. Match Key\n4. exit\nOption: ");
scanf("%d",&r);
while(getchar()!='\n');

if(r==1) 

{
if(count>=15) 
{
printf("Matrix Overflow!\n");
} else 
{
i=14-count;
printf("Asset Key ID: ");
scanf("%d",&A[i]);
while(getchar()!='\n');

printf("String Label: ");
fgets(names[i],sizeof(names[i]),stdin);
names[i][strcspn(names[i],"\n")]=0;
printf("Cataloged!\n");
count++;
}

} else if(r==2) 
{
if(count==0) {
printf("Zero Assets!\n");
}
else {
for(i=14;i>14-count;i--) 
{
printf("Key: %d | Title: %s\n",A[i],names[i]);
}
}
} 

else if(r==3)
{
printf("Target Key: ");
scanf("%d",&temp);
f=0;
for(i=14;i>14-count;i--) {
if(A[i]==temp) {
printf("Matched! Title: %s\n",names[i]);
f=1;
break;
}
}

if(!f) 
{
printf("Key Missing!\n");
}
}}

return 0;
}
