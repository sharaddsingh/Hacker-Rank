#include <stdio.h>

int main() {

    int n,b=0;
    scanf("%d",&n);   
    printf("%d",n);
    for(int i=n; i>=1 ; --i)
    {
         if(n%i==0){
             ++b;
             if(b!=1 && b%2==1)   
               printf(" %d",i);
         }    
    }
    printf(".");
}
