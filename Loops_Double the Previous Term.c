#include <stdio.h>

int main() {
   int n;
    scanf("%d", &n);
    
    if(n>0)
    {
          printf("<");
        for(int i=0; i<n; ++i)
        {
         if(i<n-1){
              printf("%d ",1<<i);
         }
            else
            {
                 printf("%d",1<<i); 
            }

        }
          printf(">");
  }

}
