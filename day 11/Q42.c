// WAP TO WRITE FUNCTION TO FIND MAXIMUM

#include <stdio.h>
int MAX(int x,int y);

int main() {  
int a,b;
printf("ENTER THE TWO NUMBERS: " );
scanf("%d\t%d",&a,&b);

 if (a==b)
{
   printf("BOTH ARE EQUAL"); 
   return 0; 
}

printf(" THE MAXIMUM OF %d AND %d IS: %d",a,b,MAX(a,b));
return 0;
}

int MAX(int x,int y)
{
int c;
if (x>y)
{   
     c=x;
    
}


else
{ 
     c=y;
   
}


return c;
}