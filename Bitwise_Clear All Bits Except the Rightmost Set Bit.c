#include <stdio.h>

int main() {
    int n,result;
    scanf("%d",&n);
    result= n &-n;
    printf("%d",result);
}
