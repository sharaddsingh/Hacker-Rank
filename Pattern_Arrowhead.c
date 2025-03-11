#include <stdio.h>

int main() {

 int n;
    scanf("%d", &n);
    
       if(n>1)
       {
                for(int i=1 ; i<=n ; ++i)
            { 
                        for(int k=1; k<=i ;++k)
                    {
                        if(k==1 || k==i)
                            printf("*");
                        else
                          printf(" ");  
                    }            
                printf("\n");                      
            }
                   for(int i=2 ; i<=n ; ++i)
            { 
                        for(int k=1; k<=n-i+1 ;++k)
                    {
                        if(k==1 || k==n-i+1)
                            printf("*");
                        else
                          printf(" ");  
                    }            
                printf("\n");                      
            }

       } 
    
         else
        printf("Shape Not Possible");
}
