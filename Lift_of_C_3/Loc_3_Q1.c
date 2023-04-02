#include<stdio.h>
#include<string.h>

void main()
{
	int i, j, n, cmp;
	char string[100], N;
	printf("Enter a string:");
	gets(string);
	printf("Enter the specific character to be removed:");
	scanf("%c",&N);
	n=strlen(string);
    for(i=0; i<n; i++)
    {
    	if(toupper(string[i])==toupper(N))
    	{
    		for(j=i; j<n; j++)
    		{
    			string[j]=string[j+1];                                      
    			
			}
			n--;
			i--;
		}
	}
	printf("The string after removing %c: %s",N,string);
}
