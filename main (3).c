#include <stdio.h>
void main(){
  int i,f=1,n;

  printf("Input the number : ");
  scanf("%d",&n);

  for(i=1;i<=n;i++)
      f=f*i;

  printf("The Factorial of %d is: %d\n",n,f);
}
