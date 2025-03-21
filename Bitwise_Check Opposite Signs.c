#include <stdio.h>


int main() {
int a,b,c;
    scanf("%d %d", &a,&b);
    
    c=  (a>>31) ^ (b>>31) ;
        if(c==0)     
        {
            printf("No");
        }
    
    else
    {
        printf("Yes");
    }
}
