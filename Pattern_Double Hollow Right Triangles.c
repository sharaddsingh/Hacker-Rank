#include <stdio.h>

int main() {

   int n;
    scanf("%d", &n);
   if(n>1) {
         for(int i=1 ; i<=n ; ++i)
        {
            for(int k=1; k<=i ;++k)
            {
                if(i==n || k==1 || k==i)
                    printf("*");
                else
                  printf(" ");  
            }
             
             for(int j=1 ; j<=2*(n-i); ++j)
             {
                 printf(" ");  
             }
             
             for(int k=1; k<=i ;++k)
            {
                if(i==n || k==1 || k==i)
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
