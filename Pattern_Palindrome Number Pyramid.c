#include <stdio.h>

int main() {
int n;
    scanf("%d", &n);
    
    for(int i =1 ; i<=n ; ++i)
    {    int x=i;
        for(int k =1 ; k<=n-i ; ++k)
        {
            printf(" ");
        }
        
        for(int j=1 ; j<=2*i-1 ; ++j)
        {
            if(j<=i)
           printf("%d", j); 
            
            else
             printf("%d", --x);    
        }
        printf("\n");
    }
}
