#include <stdio.h>

int main() {
   int n;
    scanf("%d", &n);
    if(n%2==0 )
    {
        n=n+1;
    }
    
      if(n>2)
   {  
            for(int i=1 ; i<=n ; ++i)
            {
                 for( int k=1 ; k<=n ;++k)    
              {
                  if( i==(n+2)/2 || k==(n+2)/2 )
                  {
                      printf("x");
                  }
                  else
                  {
                     printf("o");   
                  }
              } printf("\n");
            }
   }
    
    else
        printf("Shape Not Possible");

    return 0;
}
