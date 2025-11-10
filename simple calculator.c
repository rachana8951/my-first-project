#include <stdio.h>
int main()
{
float num1,num2,result;
char op;

  printf("      \n");
  printf("enter an operator (+,-,*,/):");
  scanf(" %c", &op);

  printf("enter two numbers:");
  scanf("%f %f",&num1,&num2);
  switch(op)
  {

  case '+':
  result=num1 +num2;
  printf("Result=%.2f\n",result);
  break;

  case'-':
  result=num1-num2;
  printf("Result=%.2f\n",result);
  break;

  case'*':
  result=num1*num2;
  printf("Result=%.2f/n",result);
  break;

  case'/':
  result=num1/num2;
  printf("Result=%.2f/n",result);
  break;

  printf("invalid operator! please use +,-,*,or /.\n");
  }
  return 0;
}
