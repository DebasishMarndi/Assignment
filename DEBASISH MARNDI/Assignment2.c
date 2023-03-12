#include<stdio.h>
int main()
{
	float N;
	printf("Enter a no.");
	scanf("%f", &N);
	if(N>0)
	{
		printf("N is a positive no.");
	}
	else if(N<0)
	{
		printf("N is a negative no.");
	}
	else
	{
		printf("N is equal to 0");
	}
	return 0;
}
