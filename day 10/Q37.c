/*  WAP TP PRINT STAR PYRAMID

*
***
*****
*******
*********

*/

#include <stdio.h>
int main() {
int i,j;


for ( i = 1; 5>=i; i++)
{
    for ( j=1;j <= i+(i-1); j++)
    {
        printf("*");
    }
    printf("\n");
}
return 0;
}
