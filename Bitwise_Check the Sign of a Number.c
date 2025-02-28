#include <stdio.h>

int main() {

int n,a;
    scanf("%d",&n);
   a =(n>>31) & 1;
    if(a==1)
    {
         printf("Negative");
    }
    
    
    else
    {
     printf("Positive");  
    }
}
