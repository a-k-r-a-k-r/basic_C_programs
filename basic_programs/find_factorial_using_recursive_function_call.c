//factorial of a number
#include<stdio.h>

int fact(int a) {
  if(a>=1)
      return a*fact(a-1);
  else
      return 1;
}


int main() {
  int n,r;
  printf("enter a number\n");
  scanf("%d",&n);
  r=fact(n);
  printf("factorial of %d = %d",n,r);
  return 0;
}