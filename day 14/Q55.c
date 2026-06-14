// WAP TO SECOND LARGET ELEMENT                                                                  

#include <stdio.h>                                                             
                                                                                           
int main()
{
int A[100],num,i,MAX=0,SECOND_MAX=0;

printf("ENTER THE NUMBER OF ELEMENTS: ");
scanf("%d",&num);

if (num<2) {
        printf("INVALID");                    // IF THE SIZE OF THE ARRAY IS 1
        return 1; 
    }

for ( i = 0; i<num ; i++)
{
    printf(" ELEMENT %d\n:",i+1);
    scanf("%d",&A[i]);
}     



for ( i = 0; i < num; i++)
{
    if (MAX<A[i])
    {   
         SECOND_MAX=MAX;
        MAX=A[i];
       
    }
   else if (A[i]>SECOND_MAX && A[i]!=MAX)
    {
        SECOND_MAX=A[i];    
    }
}

if (SECOND_MAX == 0) {                                             // IF ALL THE ELEMENTS ARE SAME
        printf("THERE IS NO SECOND LARGEST ELEMENT");
    } else {
        printf("THE LARGEST ELEMENT IS: %d\n",MAX);
          printf("THE SECOND LARGEST ELEMENT IS: %d",SECOND_MAX);
    }
 
return 0;
}                                                                                      