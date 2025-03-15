#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    scanf("%d", &n);
    if(n<-50 && n>50){return 0;}
     if(n>0)
     {
       for(int i=1 ; i<=n ; ++i)  
       {  
           for(int k=1 ; k<=i ; ++k)
           {
            if((i+k)%2 !=0)    
              printf("0");  
               
               else
                   printf("1");
           }
           printf("\n");
       }
     }
    else
    {
        printf("Shape Not Possible");
    }
        
}
