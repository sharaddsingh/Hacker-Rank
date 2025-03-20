#include <stdio.h>

int main() {
    int n;
    int rev=0;
    scanf("%d", &n);
        int og=n;
      while(n!=0){
          int last = n%10;
          rev = last + rev*10;
          n = n/10;
      }  
        if(og==rev){
            printf("YES");
        }
        else{
            printf("NO");
        }
    return 0;
}
