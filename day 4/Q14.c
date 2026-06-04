// WAP TO FIND THE nTH FIBONACCI TERM
#include <stdio.h>

int main() { 
int a=0,b=1,i,c,num;
printf("ENTER TERM ");       // INPUT -  nth TERM
scanf("%d",&num);
if(num<=0) {                 
    printf("INVALID");
}
else if(num==1) {
    
    
    printf("%d\t",a);
}
else if(num==2) {
    printf("%d\t",b);
}
else {
for(i=3;i<=num;i++)
{
    c=a+b;
    
    a=b;
    b=c;
}
printf("%d\t",c);
}
return 0;
}