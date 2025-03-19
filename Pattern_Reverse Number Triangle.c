#include <stdio.h>

int main() {

int n;
    scanf("%d", &n);
  
    if(n>=1 || n<=50)
    {int k=0;
         int l=0;
        for(int i=1 ; i<=n ; ++i)
        { 
        k= k+i;
         l =k;
        for(int j=1 ; j<=i ; ++j)
        {
               printf("%d ", l--);
            }
         printf("\n");
        } 
    }   
}
