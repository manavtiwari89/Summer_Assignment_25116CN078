// WAP TP PRINT HALF PYRAMID PATTERN
#include <stdio.h>
int main() {
int i,j,height;

printf("ENTER THE HEIGHT OF THE PYRAMID ");
scanf("%d",&height);

for ( i = 1; i<=height; i++)
{
    for ( j=1;j <= i; j++)
    {
        printf("*\t");
    }
    printf("\n");
}
return 0;
}
