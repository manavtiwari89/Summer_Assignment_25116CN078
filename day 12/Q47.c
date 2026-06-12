// WAP TO WRITE FUNCTION FOR FIBONACCI

                                                                            
#include <stdio.h>


 signed long long FIB( signed long long num);

int main() {  
long  long input;


printf("ENTER THE  NUMBER OF TERMS: " );
scanf("%lld",&input);

if (input<=0)
{
printf("INVALID");
return 0;
}
FIB(input);



return 0;

}

 signed long long FIB( signed long long num)
{
signed long long x=0,y=1,z=0,i;
if (num>=1)
 {
    printf("0\n");
    
 }
 
 if (num>=2)
 {
    printf("1\n");   
    
 }

for ( i = 3; i <=num; i++)
{
    z=x+y;
    printf("%lld\n",z);
    x=y;
    y=z;
}


return z;
}
