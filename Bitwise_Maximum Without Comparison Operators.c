#include <stdio.h>
int main() {
int a,b, sign,result ;
scanf("%d %d", &a , &b);    
    sign=(a-b);
    result= (sign>>31)&1;
    int number=a- (result*sign);
printf("%d",number);
    
    
}
