#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);
    int max=n;
    printf("%d", n);
    while(n!=1){
        if(n<=0){
            n=1;
        }
        else if(n%3==0){
            n=n/3;
        }
        else if(n%5==0 && n%3!=0){
            n=n-5;
        }
        else{
            n=n*5;
        }
        printf(" -> %d", n);
        
        if(n>max){
            max=n;
        }
    }
    
    printf("\nMax Number: %d", max);
    return 0;
}
