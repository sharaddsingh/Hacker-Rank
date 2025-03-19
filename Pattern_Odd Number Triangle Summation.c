
#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);
    int count=3;
    int sum;
    
    for(int i=1; i<=n; ++i){
        for(int k=1;k<=2*n-2*i; k++){
            printf(" ");
        }
        for(int j=1; j<=2*i-1; ++j){
          if(j!=i)  {
                printf("%d ", count);
                  sum=count + 1;
                  count=count+2;
            }
            
            else  {
                 if(j==1 && i==1){
                printf("1");
            }
                else{
                    printf("%d ", sum*(2*i-2));
                }
            }
            
                 
           
           
        }
        printf("\n");
    }
    return 0;
}
