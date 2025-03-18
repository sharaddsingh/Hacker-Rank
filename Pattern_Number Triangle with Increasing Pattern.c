#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);
    if(n>=1 || n<=50){
        for(int i=1; i<=n; ++i){
        int x=n-1;
        int sum=i;
        for(int j=1; j<=i; ++j){
            if(j==1){
                printf("%d ",sum);
            }
            else{
                printf("%d ",sum+x);
                sum=sum+x;
                x--;
            }
        }
        printf("\n");
    }
    }
    return 0;
}
