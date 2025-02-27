#include <stdio.h>

int main() {

    int a,b,result;
    scanf("%d %d", &a,&b);
    result=((a-b)>>31) & 1;
    if(result){
        printf("%d", a);
    }
    else{
        printf("%d", b);
    }
}
