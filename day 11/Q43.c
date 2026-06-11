// WAP TO WRITE FUNCTION TO CHECK PRIME 

#include <stdio.h>
int prime(int x);

int main() {  
int a,b;


printf("ENTER THE POSITIVE NUMBER: " );
scanf("%d",&a);

 if (a<=1)
{
   printf(" IT IS NOT A PRIME NUMBER"); 
   return 0; 
}


b= prime(a);

if (b==2)
{
    printf("IT IS A PRIME NUMBER" );
}
else
{
       printf("IT IS NOT A PRIME NUMBER" );
}



return 0;
}

int prime(int x)
{
int temp,count=0,i;

for ( i = 1; i <= x; i++)
{
    if (x%i==0)
    {
        count++;
    }
    
}


return count;
}