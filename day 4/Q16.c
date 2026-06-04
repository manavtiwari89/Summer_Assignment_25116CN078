// WAP TO PRINT ARMSTRONG NUMBER IN RANGE

#include <stdio.h>
#include <math.h>

int main() {
          int i,start,end,temp,num,sum=0,digit=0,t,m,found=0;

    printf("Enter the starting and ending range: ");
           scanf("%d %d",&start,&end);
 printf("ARMSTRONG numbers between %d\t and %d are:\n", start,end);        // INPUT FOR RANGE
 for (i = start; i <= end; i++) {                                          // LOOP FOR COUNTING ARMSTONG NUMBER
 temp=i;
 num=i;
 sum=0;
 digit=0;


while(num!=0)
{
    t=num%10;                                                                // COUNTING THE DIGITS 
    digit++;                        
    num=num/10;
} 
num=temp;
while(num!=0)
{
    m=num%10;
    sum=sum+ round(pow(m,digit));              
    num=num/10;
}
if(sum==temp)                    
{printf("%d\t",temp);
    found = 1;
}


}
if(found==0)                                                                      // IF NO ARMSTRONG NUMBER IN RANGE 
{printf("NO ARMSTRONG NUMBER IN BETWEEN"); }
else {
printf("\n"); }
return 0;
}