#include <stdio.h>

int main() {

    int n,count=0;
    scanf("%d", &n);
    
    int i=2;
    
    
    
    while(1)
    {  
        int flag=1;
        
        for(int k=2 ; k*k<=i; ++k)
        {
            if(i%k==0)
            { 
                flag=0;
                break;
            } 
            
        }
        
          if(flag==1)
            { 
               count++;
            }
        
         if(count==n)
         {
        printf("%d",i);
         break;
         }
        
        i++;
    }
    return 0;
}

