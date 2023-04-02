#include<stdio.h>
#include<string.h>
void main()
{
	char string[100];
	int i, j, count=0, n;
	printf("Enter the string:");
	gets(string);
	n=strlen(string);
	printf("Frequency count of the character:");
	
	for(i=0; i<n; i++)
	{
		count=1;
		if(string[i])
		{
			for(j=i+1; j<n; j++)
			{
				if(string[i]==string[j])
				{
					count++;
					string[j]='\0';
				}
			}
			printf("%c = %d \n",string[i], count);
		}
	}
}
