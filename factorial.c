#include<stdio.h>
int main(void)
{
 int n;
 int fact=1;
 printf("enter a number:");
 scanf("%d",&n);
 if(n < 0)
 printf("Factorial is not defined for negative number.\n");
 else{
 for (int i=1;i <=n;i++);
 {
    fact = fact*1;
 }
 printf("Factorial of %d = %d\n",n,fact);
 }
 return 0;

}
