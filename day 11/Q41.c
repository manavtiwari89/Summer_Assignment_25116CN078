// WAP TO WRITE FUNCTION TO FIND SUM OF TWO NUMBERS

#include <stdio.h>
int sum(int x,int y);

int main() {  
int a,b,c;
printf("ENTER THE TWO NUMBERS: " );
scanf("%d\t%d",&a,&b);

printf(" THE SUM OF %d AND %d IS: %d",a,b,sum(a,b));
return 0;
}

int sum(int x,int y)
{
int c;
c=x+y;
return c;
}