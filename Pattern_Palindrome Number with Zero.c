#include <stdio.h>

int main() {

int n;
    scanf("%d", &n);
    
    for(int i=1; i<=n ; ++i)
    {
        for(int j=1 ; j<=n-i ; ++j)
        {
            printf(" ");
        }
         int a=i-1;
        int b=1;
        for(int j=1 ; j<=2*i-1 ; ++j)
        {
            if(j<=i)
            {          
                printf("%d", a--);
            }
            else
            {
               printf("%d", b++); 
            }
        }
        printf("\n");
    }
}
