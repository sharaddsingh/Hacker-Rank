#include <stdio.h>

int main()
{
    int n;
    float bill;
    scanf("%d",&n);
    
     if(n<=100 && n>=0)
    {
        bill=n*5;
        printf("The electricity bill is: %.2f.", bill-(bill*10/100));
    }
    


    else if(n>100 && n<=300)
    {
        bill=100*5+ (n-100)*7;
        if(bill<=1200)
        {
            printf("The electricity bill is: %.2f.",bill-(bill*10/100));
        }
        else
        {
                        printf("The electricity bill is: %.2f.",bill);

        }
    }
  
    else if(n>300)
    {
        printf("The electricity bill is: %.2f.", bill= 100*5 + 200*7 +(n-300)*10);
    }
    
    else
    {
        printf("Invalid Input!");
    }

}