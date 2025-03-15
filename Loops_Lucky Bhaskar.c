#include <stdio.h>

int main() {
    int n;
    double x,money,min_amount;
    scanf("%lf", &x);
    scanf("%d", &n);
    money=x;
    min_amount=x;
    for(int i=1; i<=n; ++i){
        
        if(money<0.4*x){
            printf("Stopped early after %d days: %0.2f\n", i-1,money);
            printf("Minimum amount held by Bhaskar: %0.2f\n", min_amount);
                printf("Better Luck Next Time!");
            return 0;
        }
        
        
        if(i%2==0 && i%3==0){
            money = money+ 0.7*money;
            i=i+6;
        }
        else if(i%3==0){
            money = money - money/5;
        }
        else if(i%2==0){
            money = money - money/8;
        }
        else{
            money = money-0.1*money;
        }
        
        if(money<min_amount){
            min_amount=money;
        }
        
        
        
    }
    printf("After %d days: %0.2f\n", n,money);
    printf("Minimum amount held by Bhaskar: %0.2f\n", min_amount);
    if(money>0.7*x){
                printf("Lucky Bhaskar");
            }
            else{
                printf("Better Luck Next Time!");
            }
    
    
    return 0;
 }
