/*  WAP TP PRINT REVERSE PYRAMID

*********
*******
*****
***
*

*/

#include <stdio.h>
int main() {
int i,j;


for ( i = 5; 1<=i; i--)
{
    for ( j=1;j <= i+(i-1); j++)
    {
        printf("*");
    }
    printf("\n");
}
return 0;
}
