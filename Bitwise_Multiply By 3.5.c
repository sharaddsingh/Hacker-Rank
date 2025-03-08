#include <stdio.h>

int main() {

   int n;
    scanf("%d",&n);
  if(n%2==0)
  {
    int result= (n<<2) - (n>>1);
    printf("%d",result);
  }   
    else
    {
        int result= ( (n<<2) - ((n+1)>>1) );
     printf("%d",result);   
    }
  }
