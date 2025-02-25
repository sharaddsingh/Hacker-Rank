#include <stdio.h>

int main() {
int n,i,a,result;
    scanf("%d %d", &n, &i);
    a = 1<<i;
     result = n & a ;
    printf("%d", (result != 0 )?1:0);
}
