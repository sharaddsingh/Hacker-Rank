#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);
    if(n>1)
    {
      for(int i=1; i<=n ; ++i)  
      {
          for(int k=1; k<=n-i ; ++k)
          {
             printf(" "); 
          }
          
          for(int k=1; k<=2*i-1 ; ++k)
          {
             printf("*"); 
          }
          printf("\n");
      }
    }
    
    else
        printf("Shape Not Possible");
}
