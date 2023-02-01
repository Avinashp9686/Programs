#include<stdio.h>
     
int main()
{
    int i,n,sum;
	long fact=1;
     
    printf("Enter the value of n: ");
    scanf("%d",&n);
     
    sum=0;
     

    for(i=1;i<=n;i++)
        {
		fact = fact * i;
		sum= sum+ fact;
		}
     
     
    printf("The Sum of the series 1!+2!+3!+...+%d! is: %d\n",n,sum);
     
    return 0;
}
