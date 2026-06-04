// WAP TO CHECK ARMSTRONG NUMBER
#include <stdio.h>
#include <math.h>

int main() { 
int temp,num,digit=0,m,t,sum=0;
printf("ENTER TERM ");       // INPUT -  nth TERM
scanf("%d",&num);
temp=num;

while(num!=0)
{
    t=num%10;
    digit++;                        // COUNTING THE DIGITS 
    num=num/10;
} 
num=temp;
while(num!=0)
{
    m=num%10;
    sum=sum+ round(pow(m,digit));              
    num=num/10;
}
if(sum==temp)                    // CONDITION FOR ARMSTRONG NUMBER
{printf(" it is an armstrong number");
}
else {
    printf("it is not an armstrong number");
}
return 0;
}