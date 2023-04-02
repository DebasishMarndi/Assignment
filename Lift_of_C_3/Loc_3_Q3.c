#include <stdio.h>
void main()
{
  int num1, num2, *p1, *p2, sum;
  p1 = &num1;
  p2 = &num2;
  printf("Enter two integers:");
  scanf("%d%d",p1,p2);
  sum= *p1 + *p2;
  printf("The sum of the two integers = %d",sum);
}
