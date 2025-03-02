#include <stdio.h>

int main() {
    int n,r,x;
    scanf("%d %d",&n, &r);

    x=n^r;
  if(x>0 && (x & (x-1))==0)
      printf("Yes");
    else
    printf("No");
}
