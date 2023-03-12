#include<stdio.h>
int main()
{
	int a, b, c;
	printf("Enter two nos");
	scanf("%d %d", &a, &b);
	printf("Enter your choice");
	scanf("%d", &c);
	switch (c)
	{
		case 1:
			printf("The sum of the nos=%d",a+b);
		case 2:
			printf("\nThe difference of the nos=%d", a-b);
		case 3:
			printf("\nThe product of the nos=%d", a*b);
		case 4:
			printf("\nThe division of the nos=%d", a/b);
		case 5:
			printf("\nThe modulus of the nos=%d", a%b);
			break;
	}
	return 0;
}