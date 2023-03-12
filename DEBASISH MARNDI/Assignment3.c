#include<stdio.h>
int main()
{
	int n, x, s;
	printf("Enter a no");
	scanf("%d", &n);
	do
	{
		x=n%10;
		s+=x;
		n/=10;
	}
	while(n>9);
	s+=n;
	printf("The sum of the digits=%d", s);
	return 0;
}