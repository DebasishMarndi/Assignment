#include <stdio.h>
void factorial(int num,int *result);
int main()
{
    int num;
    int result = 1;
    printf("Enter a number: ");
    scanf("%d", &num);
    factorial(num, &result);
    printf("Factorial of %d is %d", num, result);
    return 0;
}

void factorial(int n,int *result) 
{
    int i;
    for(i=1; i<=n; i++) 
	{
        *result *= i;
    }
}

