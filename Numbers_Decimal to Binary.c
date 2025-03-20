#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);
    if(n>=0 && n<=1023){
        if(n==0){
            printf("Binary equivalent of 0: 0");
            return 0;
        }
            int num=n;
            int count=0;
            int x=1;
        while(n>0){
            int rem = n%2;
            count = count + rem*x;
            n=n/2;
            x=x*10;
        }
        printf("Binary equivalent of %d: %d",num,count);
    }
    return 0;
}
