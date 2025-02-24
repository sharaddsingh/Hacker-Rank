#include <stdio.h>
int main() 
{
    int n;
    scanf("%d", &n);
    if (n == 0) 
    {
        printf("Circle");
    } 
    else if (n == 3) 
    {
        int a, b, c;
        scanf("%d",&a);
        scanf("%d",&b);
        scanf("%d",&c);
        
        int A, B, C;
        scanf("%d",&A);
        scanf("%d",&B);
        scanf("%d",&C);
        
        if ((A + B + C) == 180  && a + b > c && b + c > a && c + a > b &&a>0 && b>0 && c>0 &&A>0 && B>0 && C>0)  
        {
            if (a == b && b == c && A == B && B == C) 
            {
                printf("Equilateral Triangle");
            } 
            else if (a == b || b == c || c == a) 
            {
                printf("Isosceles Triangle");
            } 
            else if (a!=b && b!=c)
            {
                printf("Scalene Triangle");
            }  
        }    
         else 
         {
             printf("Invalid Figure");
         }  
    } 
    else if (n == 4) 
    {
        int a, b, c,d;
        scanf("%d",&a);
        scanf("%d",&b);
        scanf("%d",&c);
        scanf("%d",&d);
        
        int A, B, C,D;
        scanf("%d",&A);
        scanf("%d",&B);
        scanf("%d",&C);
        scanf("%d",&D);
    
        if ((A + B + C + D) == 360 && a > 0 && b > 0 && c > 0 && d > 0 &&A>0 && B>0 && C>0 && D>0)        
        {
                if (a == b && b == c && c == d && A == 90 && B == 90 && C == 90 && D == 90) 
                {
                    printf("Square");
                } 
                else if (a == c && b == d && A == 90 && B == 90 && C == 90 && D == 90) 
                {
                    printf("Rectangle");
                } 
                else if (a == b && b == c && c == d && A == C && B == D && (A != 90 || B!=90 || C!=90 || D!=90)) 
                {
                    printf("Rhombus");
                } 
                else if (a == c && b == d && A == C && B == D) 
                {
                    printf("Parallelogram");
                } 

              else 
               {
                 printf("Invalid Figure");
               }
      }       
            
        else 
        {
            printf("Invalid Figure");
        }    
        
   }

    return 0;
}

